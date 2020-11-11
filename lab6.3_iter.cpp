#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

template <typename T>
T count1(T* a, T N)
{
	int j = 0;
	for (int i = 0; i <= N-1; ++i)
	{
		if (a[i] % 2 == 0)
		{
			++j;
		}
	}
	return j;
}
void print(int* a, int N)
{
	for (int i =0; i<=N-1; ++i)
		cout << setw(3) << a[i] << " ";

}
void create(int* a, int Low, int Max, int N)
{
	for (int i = 0; i <= N - 1; ++i)
	{
		a[i] = Low + rand() % (Max - Low + 1);
	}
	print(a, N);
}
template <typename T>
T unittest(T c[], T i, T N, T j)
{
	if (i <= N - 1)
	{
		if (c[i] % 2 == 0)
			++j;
		return unittest(c, ++i, N, j);
	}
	cout << "------------------------------------------------------" << endl;
	cout << "Unit test result (Кількість парних чисел в масиві): " << j << endl;
	return j;
}
int main()
{
	int N, Low, Max;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand((unsigned)time(NULL));
	cout << "Ітераційний" << endl;
	cout << "Введіть кількість елементів масиву: "; cin >> N;
	cout << "Введіть мінімальне значення елементу масиву: "; cin >> Low;
	cout << "Введіть максимальне значення елементу масиву: "; cin >> Max;
	int* a = new int[N];
	create(a, Low, Max, N);
	cout << endl;
	cout << "Кількіть парних: " << count1(a, N) << endl;
	delete[] a;
	int c[10] = { -10,25,7,-15,17,3,1,0,4,30 };
	unittest(c, 0, 10, 0);
}