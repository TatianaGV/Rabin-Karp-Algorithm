#pragma once
#ifndef RABIN_KARP_H
#define RABIN_KARP_H

#include <iostream>
#include <vector>

using namespace std;

int Rabin_Carp(string T, string P)
{
	int n = T.size(); //������ ������
	int m = P.size(); //������ ���������

	int p = 0; //��� ������
	int t = 0; 


	int d = 256; //���������
	int h = 1; // ����� d^(m-1)
	int q = 514229; //������� �����


	for (int i = m - 1; i >= 0; --i)
	{
		p = (d*p + (unsigned int)(P[i])) % q;
		t = (t*d + (unsigned int)(T[i])) % q;
		if (i == 0)
			break;
		h = h * d % q;
	}
	cout << p << ", "<< t << endl;

	int res = 0;
	int cnt_comp = 0;

	for (int s = 0; s <= n - m; ++s)
	{
		if (t == p)
		{
			++cnt_comp;
			//������������ ���������
			//������ ������ ����� ����� 1 ���
			if (T.substr(s, m) == P)
				++res;
		}

		if (s == n - m)
			break;

		t = ((t - (unsigned int)T[s] * h) + (unsigned int)T[s + m]) % q;
		cout << t << endl;
	}
	return cnt_comp;
}

#endif // !RABIN_KARP_H
