#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<locale.h>

using namespace std;

void FillArray(int *p, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		p[i] = 1 + rand() % 12;
	}

}

void PrintArray(int *p, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}

int SumArray(int *p, int n)
{
	int Sum = 0;

	for (size_t i = 0; i < n; i++)
	{
		Sum = Sum + p[i];
	}
	return Sum;
}

int ProArray(int *p, int n)
{
	int Pro = 1;

	for (size_t i = 0; i < n; i++)
	{
		Pro = Pro * *(p + i);
	}
	return Pro;
}

double Arif(int *p, int n)
{
	int count = 0;
	int Sum = 0;

	for (size_t i = 0; i < n; i++)
	{
		count++;
		Sum = Sum + *(p + i);
	}

	return((double)Sum / (double)count);
}

void Percentage(int *p, int n)
{
	int count = 0;
	int countM = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (*(p+i) >= 0 )
		{
			count++;
		}
		else
		{
			countM++;
		}
	}

	cout << "Процент положительных = "<< count*10 << endl;
	cout << "Процент отрицательных = " << countM * 10 << endl;
}

int Chet(int *p, int n)
{
	int Sum = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (i%2 == 0)
		{
			Sum = Sum + *(p + i);
		}

	}
	return Sum;
}

int Nechet(int *p, int n)
{
	int Sum = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			Sum = Sum + *(p + i);
		}

	}
	return Sum;
}

int Kratniy3(int *p, int n)
{
	int Sum = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (i%3==0 && i != 0)
		{
			Sum = Sum + *(p + i);

		}

	}
	return Sum;
}

int Kratniy7(int *p, int n)
{
	int Sum = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (i % 7 == 0 && i!=0)
		{
			Sum = Sum + *(p+i);

		}

	}
	return Sum;
}

void Ocenka(int *p, int n)
{
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	int sum5 = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (p[i] >= 10 && *(p + i) <= 12)
		{
			sum5++;
		}
		if (p[i] >= 7 && *(p + i) <= 9)
		{
			sum4++;
		}
		if (p[i] >= 4 && *(p + i) <= 6)
		{
			sum3++;
		}
		if (p[i] <= 3)
		{
			sum2++;
		}
	}

	cout << "Percentage 2 = " << sum2 * 5 << endl;
	cout << "Percentage 3 = " << sum3 * 5 << endl;
	cout << "Percentage 4 = " << sum4 * 5 << endl;
	cout << "Percentage 5 = " << sum5 * 5 << endl;

}

void Find(int *p, int n)
{
		
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int flag;
	const int n = 10;
	const int m = 20;
	int B[m];
	int A[n], x;
	int *p = A;
	int *o = B;

	do
	{
		FillArray(p, n);
		PrintArray(p, n);

		Find(p, n);

		cout << "Continue?1/0";
		cin >> flag;

	} while (flag == 1);

}