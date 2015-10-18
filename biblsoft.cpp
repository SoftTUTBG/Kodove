#include <iostream>
#include <string>
using namespace std;

//обект реализиращ книга в книжарница
class Book
{
public:
  double price;
  int year;
  string name;
  void ShowInfo() const
  {
    cout << "Заглавие: " << name << "\n";
    cout << "Цена: " << price << "\n";
    cout << "Година на издаване: " << year << "\n";
  }
};


int main()
{
  Book book;
  cout << "Въведете заглавие: ";
  getline(cin, book.name); //прочитаме ред от стандартният вход
  cout << "Въведете цена: ";
  cin >> book.price;
  cout << "Въведете дата на издаване: ";
  cin >> book.year;

  book.ShowInfo(); //извеждаме получените данни
  return 0;
}
