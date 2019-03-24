#include <iostream>
#include "Rabin-Karp.h"
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string text = "fjnkaaadlkdnaaaaldnlw";
	string subtext = "adlkdna";
	
	cout <<"Исходная строка: " <<text << endl;
	cout <<"Исходная подстрока: " <<subtext << endl;

	cout <<"Количество вхождений подстроки в строку: " <<Rabin_Carp(text,subtext)<< endl;

	system("PAUSE");
	return 0;
}