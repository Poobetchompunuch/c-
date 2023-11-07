#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string studentIds[100];
string studentNames[100];
string facultyBranches[100];
string bookISBNs[100];
string bookTitles[100];
string bookAuthors[100];
string publishers[100];
int publicationYears[100];
string borrowedBy[100];
int numStudents = 0;
int numBooks = 0;

void addStudent(string id, string name, string facultyBranch) {
    if (numStudents < 100) {
        studentIds[numStudents] = id;
        studentNames[numStudents] = name;
        facultyBranches[numStudents] = facultyBranch;
        cout << "Student added successfully!\n";
        numStudents++;
    }
    else {
        cout << "Maximum number of students reached!\n";
    }
}

void addBook(string isbn, string title, string author, string publisher, int publicationYear) {
    if (numBooks < 100) {
        bookISBNs[numBooks] = isbn;
        bookTitles[numBooks] = title;
        bookAuthors[numBooks] = author;
        publishers[numBooks] = publisher;
        publicationYears[numBooks] = publicationYear;
        borrowedBy[numBooks] = "";
        cout << "Book added successfully!\n";
        numBooks++;
    }
    else {
        cout << "Maximum number of books reached!\n";
    }
}

void borrowBook(string studentId, string bookISBN) {
    for (int i = 0; i < numBooks; ++i) {
        if (bookISBNs[i] == bookISBN && borrowedBy[i] == "") {
            borrowedBy[i] = studentId;
            cout << "Book borrowed successfully!\n";
            return;
        }
    }
    cout << "Book not available or invalid ISBN.\n";
}

void returnBook(string studentId, string bookISBN) {
    bool bookReturned = false;
    for (int i = 0; i < numBooks; ++i) {
        if (bookISBNs[i] == bookISBN && borrowedBy[i] == studentId) {
            borrowedBy[i] = "";
            bookReturned = true;
            break; 
        }
    }

    if (bookReturned) {
        cout << "Book returned successfully!\n";
    }
    else {
        cout << "Invalid ISBN or book is not borrowed by this student.\n";
    }
}

void displayBorrowedBooks(string studentId) {
    cout << setfill('-') << setw(45) << "\n";
    cout << "Borrowed Books for Student ID " << studentId << ":\n";
    cout << setfill('-') << setw(45) << "\n";
    bool found = false;
    for (int i = 0; i < numBooks; ++i) {
        if (borrowedBy[i] == studentId) {
            cout << "ISBN: " << bookISBNs[i] << endl;
            cout << "Title: " << bookTitles[i] << endl;
            found = true;
            cout << setfill('-') << setw(45) << "\n";
        }
    }

    if (!found) {
        cout << "No books borrowed by this student.\n";
    }
}

void generateReport() {
    cout << setfill('-') << setw(30) << "\n";
    cout << "          Students \n";
    cout << setfill('-') << setw(30) << "\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "ID: " << studentIds[i] << endl;
        cout << "Name: " << studentNames[i] << endl;
        cout << "Faculty Branch: " << facultyBranches[i] << endl;
        cout << setfill('-') << setw(30) << "\n";

    }
    cout << endl;
    cout << setfill('-') << setw(30) << "\n";
    cout << "           Books\n";
    cout << setfill('-') << setw(30) << "\n";
    for (int i = 0; i < numBooks; ++i) {
        cout << "ISBN: " << bookISBNs[i] << endl;
        cout << "Title: " << bookTitles[i] << endl;
        cout << "Author: " << bookAuthors[i] << endl;
        cout << "Publisher: " << publishers[i] << endl;
        cout << "Year of Publication: " << publicationYears[i] << endl;
        cout << setfill('-') << setw(30) << "\n";
        if (borrowedBy[i] != "") {
            cout << "(Borrowed by: " << borrowedBy[i] << ")\n";
        }
        else {
            cout << "         (Available)\n";
        }
        cout << setfill('-') << setw(30) << "\n";
    }

}

int main() {
    int choice;
    do {
        cout << setfill('=') << setw(45) << "\n";
        cout << "                   Menu               \n";
        cout << setfill('=') << setw(45) << "\n";
        cout << "1. Add Student\n";
        cout << "2. Add Book\n";
        cout << "3. Borrow Book\n";
        cout << "4. Return Book\n";
        cout << "5. Generate Report\n";
        cout << "6. Exit\n";
        cout << setfill('=') << setw(45) << "\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string id, firstName, lastName, facultyBranch;
            cout << "Enter student ID: ";
            cin >> id;
            cout << "Enter first name: ";
            cin >> firstName;
            cout << "Enter last name: ";
            cin >> lastName;
            cout << "Enter faculty branch: ";
            cin >> facultyBranch;
            addStudent(id, firstName + " " + lastName, facultyBranch);
            break;
        }
        case 2: {
            string isbn, title, author, publisher;
            int publicationYear;
            cout << "Enter book ISBN: ";
            cin >> isbn;
            cout << "Enter book title: ";
            cin >> title;
            cout << "Enter book author: ";
            cin >> author;
            cout << "Enter publisher: ";
            cin >> publisher;
            cout << "Enter year of publication: ";
            cin >> publicationYear;
            addBook(isbn, title, author, publisher, publicationYear);
            break;
        }
        case 3: {
            string studentId, bookISBN;
            cout << "Enter student ID: ";
            cin >> studentId;
            cout << "Enter book ISBN: ";
            cin >> bookISBN;
            borrowBook(studentId, bookISBN);
            break;
        }
        case 4: {
            string studentId, bookISBN;
            cout << "Enter student ID: ";
            cin >> studentId;
            displayBorrowedBooks(studentId);
            cout << "Enter book ISBN to return : ";
            cin >> bookISBN;
            if (bookISBN == "Q" || bookISBN == "q") {
                
                returnBook(studentId, "");
            }
            else {
                
                returnBook(studentId, bookISBN);
            }
            break;
        }
        
        
        case 5: {
            generateReport();
            break;
        }
        case 6:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
    }
} while (choice != 6);

return 0;
}