#include<iostream>
#include<string.h>
#include<stdlib.h>
#include "Library.h"
using namespace std;

int main() {
	Library lib[100];
	int input = 0;
	int count = 0;

	while (input != 3) {
		cout<<"Enter 1 to input details like id,name,author name, student name , prices, pages" << endl;
		cout<<"Enter 2 to dispay details" << endl;
		cout<<"Enter 3 to quit" << endl;
		cout<<"Enter 4 to search by book ID" << endl;
		cout<<"Enter 5 to update price by book ID" << endl;
		cin >> input;
		
		switch (input) {
		case 1: {
			if (count < 100) {
				lib[count].input_details();
				count++;
			}
			else {
				cout << "Unfortunately the library is full, please try again" << endl;
			}
			break;
		}
		case 2: {
			for (int x = 0; x < count; x++) {
				cout << "\nBook " << (x + 1) << " Details: " << endl;
				lib[x].display();
			}
			break;
		}
		case 3:
			exit(0);
			break;
		case 4: {
			int searchId;
			cout << "Enter book ID to search: ";
			cin >> searchId;
			bool found = false;
			for (int i = 0; i < count; i++) {
				if (lib[i].searchById(searchId)) {
					lib[i].display();
					found = true;
					break;
				}
			}
			if (!found) {
				cout << "Book not found!" << endl;
			}
			break;
		}
		case 5: {
			int id;
			int newPrice;
			cout << "Enter book ID to update price: ";
			cin >> id;
			cout << "Enter new price: ";
			cin >> newPrice;
			bool updated = false;
			for (int i = 0; i < count; i++) {
				if (lib[i].searchById(id)) {
					lib[i].updatePrice(newPrice);
					cout << "Price updated successfully!" << endl;
					updated = true;
					break;
				}
			}
			if (!updated)
				cout << "Book not found!" << endl;
			break;
		}

		}

	}
	return 0;
}