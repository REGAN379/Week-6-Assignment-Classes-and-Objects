//REGNO:CT101/G/26595/25
//NAME:ODWORI WANZALA REGAN
//Week 6 Assignment
//CODE:SPC 2204:OOP1

#include <iostream>
#include <string>
using namespace std;

// Create a class named Book
class Book
{
private:
    // Attributes of the Book class
    string bookTitle;
    string author;
    int copiesAvailable;

public:

    // Function to input book details
    void inputDetails()
    {
        cout << "Enter book title: ";
        getline(cin, bookTitle);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter number of copies available: ";
        cin >> copiesAvailable;
    }

    // Function to borrow a book
    void borrowBook()
    {
        if (copiesAvailable > 0)
        {
            copiesAvailable--;

            cout << "\nBook borrowed successfully!" << endl;
        }
        else
        {
            cout << "\nSorry, no copies of this book are available." << endl;
        }
    }

    // Function to display book details
    void displayDetails()
    {
        cout << "\n----- Book Details -----" << endl;
        cout << "Book Title: " << bookTitle << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copiesAvailable << endl;
    }
};

// Main function
int main()
{
    // Create an object of the Book class
    Book book1;

    // Input book details
    book1.inputDetails();

    // Borrow the book
    book1.borrowBook();

    // Display updated book details
    book1.displayDetails();

    return 0;
}