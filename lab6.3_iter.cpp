#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void create(int* a, int Low, int Max, int N);
void print(int* a, int N);
template <typename T>
T count1(T* a, T N);

int main()
{
	int N, Low, Max;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand((unsigned)time(NULL));
	cout << "�����������" << endl;
	cout << "������ ������� �������� ������: "; cin >> N;
	cout << "������ �������� �������� �������� ������: "; cin >> Low;
	cout << "������ ����������� �������� �������� ������: "; cin >> Max;
	int* a = new int[N];
	create(a, Low, Max, N);
	print(a,N);
	cout << endl;
	cout << "ʳ����� ������: " << count1(a, N) << endl;
	delete[] a;
}
void create(int* a, int Low, int Max, int N)
{
	for (int i = 0; i <= N - 1; ++i)
		a[i] = Low + rand() % (Max - Low + 1);
}
void print(int* a, int N)
{
	for (int i = 0; i <= N - 1; ++i)
		cout << setw(3) << a[i] << " ";
}
template <typename T>
T count1(T* a, T N)
{
	int j = 0;
	for (int i = 0; i <= N - 1; ++i)
	{
		if (a[i] % 2 == 0)
		{
			++j;
		}
	}
	return j;
}