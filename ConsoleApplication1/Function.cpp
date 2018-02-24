#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>


using namespace std;
enum type_number { possitive, negative, all };
enum sortirovka { ubivanie, vozrastanie };


int sluch_number(type_number tn, int start, int end)
{


switch (tn) {
case possitive:
	return (start + rand() % end);
	break;
case negative:
	return (start*(-1) + rand() % end);
	break;
case all:
	return rand();
}
}

void massiv(int *a, int r, int start, int end, type_number tn)
{
	for (int i = 0; i < r; i++)
	{
		a[i] = sluch_number(tn, start, end);
	}

}

void print_massiv(int *a, int r)
{
	for (int i = 0; i < r; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}

void sort(int*a, int r, sortirovka k)
{
	switch (k) {
	case ubivanie: {
		int l;
		for (int i = 0; i < r - 1; i++)
		{
			for (int j = r - 1; j > i; j--)
			{
				if (a[j - 1] < a[j])
				{
					l = a[j - 1];
					a[j - 1] = a[j];
					a[j] = l;
				}
			}
		}
	}
	case vozrastanie: {
		int l;
		for (int i = 0; i < r - 1; i++)
		{
			for (int j = r - 1; j > i; j--)
			{
				if (a[j - 1] > a[j])
				{
					l = a[j - 1];
					a[j - 1] = a[j];
					a[j] = l;
				}
			}
		}
	}break;
	}
}

void stick_massive(int *a, int *b, int n, int m, int *c)
{
	while (n != 0 && m != 0)
	{
		if (*a > *b)
		{
			*c++ = *b++;
			--m;
		}
		else if (*a < *b)
		{
			*c++ = *a++;
			--n;
		}
		else
		{
			*c++ = *a++;
			*c++ = *b++;
			--n;
			--m;
		}
	}

	while (n--)
		*c++ = *a++;

	while (m--)
		*c++ = *b++;

}

void general_elements(int *a, int n, int *b, int m, int *c)
{
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i] == b[j])
				{
					c[i] = a[i];
				
				}
			}
		}*/
	}

void different_elements(int *a, int n, int *b, int m, int *c)
{
	
}


int even_num(int a)
{
	if (a % 2 == 0)
		return 1;
	else
		return 0;
}

int prost(int a)
{
	int s = 0;
	int k = sqrt(a);
	for (int i = 2; i <= k; i++)
	{
		if (a%i == 0)
			s++;
	}
	return s;
}

int max_num(int *a, int r)
{
	int max = *a;
	for (int i = 0; i < r; i++) {
		a++;
		if (*a > max)
			max = *a;
	}
	return max;
}

void sum_arr(int*a, int *b, int *c, int r)
{
	for (int i = 0; i < r; i++)
	{
		c[i] = a[i] + b[i];
	}
}

int happy_ticket(int *a, int r)
{
	int s = 0, s1 = 0;

	for (int i = 0; i < 3; i++)
		s += a[i];
	for (int i = 3; i < r; i++)
		s1 += a[i];

	if (s == s1)
		return 1;
	else
		return 0;

}

int perfect_number(int n)
{

	int i = 3;
	while (i < sqrt(n)) {
		if (n % i == 0) return false;
		i += 2;
	}
	return true;
}