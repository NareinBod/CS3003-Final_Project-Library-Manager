#include <iostream>
#include <cstring>
#include<stdlib.h>
#include "Library.h"

using namespace std;

void Library::input_details() {
	cout << "Enter the book ID" << endl;
	cin >> book_id;
	cin.ignore();

	cout << "Enter the Book Name" << endl;
	cin.getline(bookname, 200);

	cout << "Enter the author Name" << endl;
	cin.getline(author_name, 100);

	cout << "Enter the Student Name" << endl;
	cin.getline(student_name, 100);

	cout << "Enter the Price" << endl;
	cin >> price;

	cout << "Enter the Number of pages" << endl;
	cin >> pages;
	cin.ignore();
}

void Library::display() const {
	cout << "Book Id: " << book_id << endl;
	cout << "Book Name: " << bookname << endl;
	cout << "Author name: " << author_name << endl;
	cout << "Student Name: " << student_name << endl;
	cout << "Price: " << price << "$" << endl;
	cout << "Pages: " << pages << endl;
}
bool Library::searchById(int id) const {
	return book_id == id;
}
void Library::updatePrice(int new_price) {
	price = new_price;
}
void BorrowerDetails::input_user_details() {
	input_details(); 
	cin.ignore();
	cout << "Enter the borrower Name: ";
	cin.getline(student_name,100);
}

void BorrowerDetails::display_user() const {
	display(); 
	cout << "Student Name: " << student_name << endl;
}