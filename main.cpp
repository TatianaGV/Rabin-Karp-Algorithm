#include <iostream>
#include "Rabin-Karp.h"
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string text = "fjnkaaadlkdnaaaaldnlw";
	string subtext = "adlkdna";
	
	cout <<"�������� ������: " <<text << endl;
	cout <<"�������� ���������: " <<subtext << endl;

	cout <<"���������� ��������� ��������� � ������: " <<Rabin_Carp(text,subtext)<< endl;

	system("PAUSE");
	return 0;
}