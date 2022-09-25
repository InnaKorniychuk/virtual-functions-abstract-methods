#include<iostream>
#include<string>
#include <Windows.h>
#include"String.h"
#include"SpecialCharacters.h"
#include "CapitalLetters.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//створюмо вказівник на базовий клас
	String* s[2];
	string str;
	cout << "Введіть рядок: ";
	getline(cin, str);
	SpecialCharacter cd( str);
	//присвоюємо об'єкт похідного класу за допомогою посилання
	s[0] = &cd;
	cout << "Напишіть cимвол, який хочете продублювати : ";
	char ch;
	cin>>ch;
	cout << "Отримуємо новий рядок дублюванням букви : ";
	cout << s[0]->NewLine(ch) << endl;//викликаємо віртуальну ф-цію та вивожимо її на консоль
	cout << "Довжина цього рядка: ";
	cout << s[0]->length() << endl;
	cout << "------------------" << endl;
	string str2;
	cout << "Введіть рядок: ";
	cin >> str;
	CapitalLetters c(str);
	//присвоюємо об'єкт похідного класу за допомогою посилання
	s[1] = &c;
	cout << "Напишіть символ, який хочете видалити: ";
	cin >> ch;
	cout << "Отримуємо рядок: ";
	cout << s[1]->NewLine(ch)<<endl;
	cout << "Довжина цього рядка: ";
	cout << s[1]->length()<<endl;//викликаємо віртуальну ф-цію та вивожимо її на консоль
	return 0;
}