/*9.Write a program create Book class.Which include member data are 
int pubs,float cost, string title.
 Declare default constructor,parameterized constructor ,getlist(),showlist().
 Doing the class for four objects .
Object1 is assigned value.Object2*/
#include <iostream>
#include <string>

using namespace std;

class Book {
 private:
  int pubs;
  float cost;
  string title;

 public:

  Book() {
    pubs = 20;
    cost = 10.0;
    title = "book1";
  }


  Book(int p, float c, string t) {
    pubs = p;
    cost = c;
    title = t;
  }

  void getlist() {
    cout << "Enter publication year: ";
    cin >> pubs;
    cout << "Enter cost: ";
    cin >> cost;
    cin.ignore();
    cout << "Enter title: ";
    getline(cin, title);
  }

  void showlist() {
    cout << "Publication year: " << pubs << endl;
    cout << "Cost: " << cost << endl;
    cout << "Title: " << title << endl;
  }
};

int main() {

  Book b1;
  Book b2(2011, 10, "Book 2");
  Book b3(b2);
  Book b4;
  b4.getlist();


  cout << "Book 1 " << endl;
  b1.showlist();
  cout << "Book 2 " << endl;
  b2.showlist();
  cout << "Book 3 " << endl;
  b3.showlist();
  cout << "Book 4 " << endl;
  b4.showlist();

  return 0;
}