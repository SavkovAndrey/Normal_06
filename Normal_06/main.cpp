#include <iostream>

using namespace std;
//---------------------������� � ���������---------------------------------------

//  �������� ���������, ������� ��������� ������ ����������� nxn �� ��������� ������� :
/*    1  3  4 10 11
	  2  5  9 12 19
	  6  8 13 18 20
	  7 14 17 21 24
	 15 16 22 23 25  */
// �� ����, ���������� ������� ������ ���� �� ���������, ������ - ����, ����� - �������.
// ������ ���������� ��� � ���������������.


//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------���� �����-------------------------------------

	int n, x = 1;

	cout << "������� ������ ������� �������: ";
	cin >> n;

	int** arr = new int* [n];           // ������

	for (int i = 0; i < n; i++)        // ������
	{
		arr[i] = new int[n];           // �������
	}

	//-------������-------------------------------------------

	int s = 0, k = 0, f = 1;
	

	
	
	arr[s][k] = x;

	while (f != n)
	{

		s += 1;
		            x += 1;
        arr[s][k] = x;


		for (int i = 0; i < f; i++)
		{
			s -= 1;
			k += 1;

			        x += 1;
		arr[s][k] = x;
		}
        f += 1;
		
		
		if (f == n)
		{
			break;
		}

		//---------------

		k += 1;
		            x += 1;
        arr[s][k] = x;


		for (int i = 0; i < f; i++)
		{
			s += 1;
			k -= 1;

		        	x += 1;
		arr[s][k] = x;
		}
		f += 1;
	

	}

	//-------�����--------------------------------------------
	/*
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl << endl;
	*/
	//----------------------- ������� ---------------------------
	f = n - 2;

	if (n % 2 == 1)
	{

		while (x != n * n)
		{
			k += 1;
			x += 1;
			arr[s][k] = x;
		

			for (int i = 0; i < f; i++)
			{
				s -= 1;
				k += 1;

				x += 1;
				arr[s][k] = x;
			}
			f -= 1;

			//---------------

			s += 1;
			x += 1;
			arr[s][k] = x;
			if (x == n * n)
			{
				break;
			}


			for (int i = 0; i < f; i++)
			{
				s += 1;
				k -= 1;

				x += 1;
				arr[s][k] = x;
			}
			f -= 1;


		}
	}

	else
	{
		while (x != n * n)
		{
			s += 1;
			x += 1;
			arr[s][k] = x;
			if (x == n * n)
			{
				break;
			}

			for (int i = 0; i < f; i++)
			{
				s += 1;
				k -= 1;

				x += 1;
				arr[s][k] = x;
			}
			f -= 1;

			//---------------

			k += 1;
			x += 1;
			arr[s][k] = x;


			for (int i = 0; i < f; i++)
			{
				s -= 1;
				k += 1;

				x += 1;
				arr[s][k] = x;
			}
			f -= 1;


		}





	}


	//-------������ ����� ------------------------------------

	//-------�����--------------------------------------------

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl << endl;
	}
	cout << endl << endl;


	//-------��������-----------------------------------------

	for (int i = 0;i < n; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;

	system("pause");

	return 0;
}
