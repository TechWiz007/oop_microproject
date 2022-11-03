/* 
Write a menu driven C++ program to define a class book_store. 
Include the following members:
Book Name, Author, Publisher, Price, No. of copies issued, No. of copies available
Member Functions
1. To assign initial values(use default constructor)
2. To accept book entries 
3. To sell a book after checking for its availability
4. To return a sold book
5. To display book information.
6. To display current status of book available based on book name 
*/

#include<iostream>
#include<fstream>
#include<string>
#include<time.h>

using namespace std;

class book_store {
	string book_name, author, publisher;
	float price;
	static int copies_available;
	int copies_issued;
	public:
	book_store() {	//Default constructor
		int count;
		copies_available = 100;
		count = copies_available;
	}
	void accept_book();	//To accept book entries
	void sell();	//To sell a book after checking for its availability
	void return_book();	//To return a sold book
	void display_book();	//To display book information
	void book_status();	//To display current status of book available based on the book name
};

int book_store::copies_available;

void book_store::accept_book() {
	system("cls");
	fstream book_data;
	cout<<"Name of the book: ";
	cin>>book_name;
	cout<<"\nAuthor: ";
	cin>>author;
	cout<<"\nPublisher: ";
	cin>>publisher;
	cout<<"\nPrice of the book: ";
	cin>>price;

	book_data.open("book_data.txt", ios::out | ios::app);
	book_data<<"Name of the book: "<<book_name<<"\nAuthor: "<<author<<"\nPublisher: "<<publisher<<"\nPrice: "<<price;
	book_data.close();
}

void book_store::sell() {

}

void book_store::return_book() {

}

void book_store::display_book() {

}

void book_store::book_status() {
	
}

int main() {
	int choice;
	char x;
	book_store b;
	system("cls");
	cout<<"\n\n\n\t\t\tMain Menu\t\t\t\n\n\n";
	cout<<"1. Accept book entries\n";
	cout<<"2. Sell a book after checking for its availability\n";
	cout<<"3. Return a sold book\n";
	cout<<"4. Display book information\n";
	cout<<"5. Display current status of the book based on book name\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	switch(choice) {
	case 1: do {
		b.accept_book();
		cout<<"Do you want to add another book? (y/n)";
		cin>>x;
	} while (x == 'y');
	break;
	case 2: b.sell();
	break;
	case 3: b.return_book();
	break;
	case 4: b.display_book();
	break;
	case 5: b.book_status();
	break;
	default: cout<<"Invalid Choice!";
	break;
	}
	return 0;
}
