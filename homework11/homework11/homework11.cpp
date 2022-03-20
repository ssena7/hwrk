#include<iostream>
using  namespace std;
int array[9];

void rotation(int array[], int arraysize)
{
	int i;
	int last = array[arraysize - 1];
	for (i = arraysize - 2; i <= 0; i--);
	{array[i - 1] = array[i]; }
	array[0] = last;
}


int main() {



	string N;
	string direction;
	int array[] = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 9; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	cout << "Enter N for shift an array:" << endl;
	cin >> N;


	cout << "Enter direction for shift an array:" << endl;
	cin >> direction;



	system("pause");
}