#pragma once
#include<string>
using namespace std;
class String {
protected:
	string st,str;
	char t;

public:
	String(){};
	String(string str1) { str = str1; };//створюємо конструктор, у якому присвоюємо значення рядка
	virtual string NewLine(char t) {//ствоюємо віртуальну ф-цію,яка поертає значення рядка
		return str;
	}
	virtual int length() {//створюємо віртуальну ф-цію,яка повертає довжину рядка
		return str.length();
	}
};