#pragma once
#include"String.h"

class SpecialCharacter: public String {

public:
	
	SpecialCharacter(string str1):String(str1){};
	string NewLine(char t) override {//викликаємо віртуальну ф-цію
		
		for (int i = 0; i < str.length(); i++) {
			st.push_back(str[i]);//писвоюєму букви з одного рядка в інший
			if (str[i]==t) {
				st.push_back(t);	//якщо буква відповідає заданій, то дублюємо її
			}
		}
		

		return st;
	};
	int length()override {//викликаємо віртуальну ф-цію та повертаємо довжину рядка
		return st.length();
	}
};