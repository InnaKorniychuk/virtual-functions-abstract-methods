#include<iostream>
#include<string>
#include <Windows.h>
#include"String.h"
#include"SpecialCharacters.h"
#include "CapitalLetters.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//�������� �������� �� ������� ����
	String* s[2];
	string str;
	cout << "������ �����: ";
	getline(cin, str);
	SpecialCharacter cd( str);
	//���������� ��'��� ��������� ����� �� ��������� ���������
	s[0] = &cd;
	cout << "�������� c�����, ���� ������ ������������ : ";
	char ch;
	cin>>ch;
	cout << "�������� ����� ����� ����������� ����� : ";
	cout << s[0]->NewLine(ch) << endl;//��������� ��������� �-��� �� �������� �� �� �������
	cout << "������� ����� �����: ";
	cout << s[0]->length() << endl;
	cout << "------------------" << endl;
	string str2;
	cout << "������ �����: ";
	cin >> str;
	CapitalLetters c(str);
	//���������� ��'��� ��������� ����� �� ��������� ���������
	s[1] = &c;
	cout << "�������� ������, ���� ������ ��������: ";
	cin >> ch;
	cout << "�������� �����: ";
	cout << s[1]->NewLine(ch)<<endl;
	cout << "������� ����� �����: ";
	cout << s[1]->length()<<endl;//��������� ��������� �-��� �� �������� �� �� �������
	return 0;
}