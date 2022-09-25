#pragma once
#include"String.h"
class CapitalLetters : public String {
public:
	CapitalLetters(string str1) :String(str1) { /*s = str1;*/ };
	string NewLine(char t) override{//викликаємо віртуальну ф-цію
	
		for (int i = 0; i < str.length(); i++) {
			if (str[i] != t) {//якщо буква не доровнію заданій, то присвоюєму це значення в інший string
				st.push_back(str[i]);
			}
		}
		str = st;//присвоюємо нове речення старому

		
		return str;
	}
	int length()override {//викликаємо віртуальну ф-цію та повертаємо довжину рядка
		return str.length();
	}
	
};