#pragma once
#include<string>
using namespace std;
class String {
protected:
	string st,str;
	char t;

public:
	String(){};
	String(string str1) { str = str1; };//��������� �����������, � ����� ���������� �������� �����
	virtual string NewLine(char t) {//�������� ��������� �-���,��� ������ �������� �����
		return str;
	}
	virtual int length() {//��������� ��������� �-���,��� ������� ������� �����
		return str.length();
	}
};