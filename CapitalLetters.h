#pragma once
#include"String.h"
class CapitalLetters : public String {
public:
	CapitalLetters(string str1) :String(str1) { /*s = str1;*/ };
	string NewLine(char t) override{//��������� ��������� �-���
	
		for (int i = 0; i < str.length(); i++) {
			if (str[i] != t) {//���� ����� �� ������� ������, �� ���������� �� �������� � ����� string
				st.push_back(str[i]);
			}
		}
		str = st;//���������� ���� ������� �������

		
		return str;
	}
	int length()override {//��������� ��������� �-��� �� ��������� ������� �����
		return str.length();
	}
	
};