#pragma once
#include"String.h"

class SpecialCharacter: public String {

public:
	
	SpecialCharacter(string str1):String(str1){};
	string NewLine(char t) override {//��������� ��������� �-���
		
		for (int i = 0; i < str.length(); i++) {
			st.push_back(str[i]);//��������� ����� � ������ ����� � �����
			if (str[i]==t) {
				st.push_back(t);	//���� ����� ������� ������, �� �������� ��
			}
		}
		

		return st;
	};
	int length()override {//��������� ��������� �-��� �� ��������� ������� �����
		return st.length();
	}
};