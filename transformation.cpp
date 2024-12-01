#include <iostream>
using namespace std;
void transformation(int arra[], int size, int n);
int main()
{
	system("cls");
	int size;
	cout << "Enter size of the array: ";
	cin >> size;
	int n;
	cout << "Enter number of transformations: ";
	cin >> n;
	int array[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Elements in array: ";
		cin >> array[i];
	}

	transformation(array, size, n);
	cout<<"Modified array: ";
	for(int i=0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
void transformation(int array[], int size, int n)
{
	for(int t=0; t<n; t++)
	{
		for(int i=0; i<size; i++)
		{
			if(array[i] % 2== 0)
			{
				array[i] = array[i] -2;
			}
			else
			{
				array[i] = array[i] + 2;
			}
		}
	}	
}
