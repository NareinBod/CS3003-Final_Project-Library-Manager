#pragma once
class Library {
private:
	int book_id;
	char bookname[200];
	char author_name[100];
	char student_name[100];
	int price;
	int pages;
public:
	void input_details();
	void display() const;
	bool searchById(int) const;
	void updatePrice(int);
};

class BorrowerDetails : public Library {
private:
	char student_name[100];

public:
	void input_user_details();
	void display_user() const;
};

