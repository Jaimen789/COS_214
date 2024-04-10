#include <iostream>
using namespace std ;
typedef int * IntPtrType ;
int countEven(int *arr, int size);
double* maximum(double *arr, int size);

int main ( )
{
	IntPtrType ptr_a , ptr_b , * ptr_c;

	ptr_a = new int ;
	*ptr_a = 15;
	ptr_b = ptr_a ;
	cout << *ptr_a << " " << *ptr_b << "\n" ; // 15 15

	ptr_b = new int ;
	*ptr_b = 4 ;
	cout << *ptr_a << " " << * ptr_b << "\n" ; // 15 4

	*ptr_b = *ptr_a ;
	cout << *ptr_a << " " << *ptr_b << "\n" ; // 15 15

	delete ptr_a ;
	ptr_a = ptr_b ;
	cout << *ptr_a << " " << *&*&*&*&*ptr_b << "\n" ; // 15 15

	ptr_c = &ptr_a ;
	cout << *ptr_c << " " << **ptr_c << "\n" ; // 0x5627e296e2e0 15
	delete ptr_a ;
	ptr_a = NULL;
	

	//int arr
	int *ptr_i = new int[15];
	for (int i = 0; i < 15; i++)
	{
		ptr_i[i] = i*5%3;
	}

	//create double array
	double *ptr_d = new double[15];
	for(int i = 0; i < 15; i++)
	{
		ptr_d[i] = i*i;
	}
	

	cout << "Number of even numbers:  " << countEven(ptr_i, 15) << endl;
	cout << "Maximum value:  " << *(maximum(ptr_d, 15)) << endl;

	return 0 ;
}


int countEven(int *arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			count++;
		}
	}
	return count;
}

double* maximum(double *arr, int size)
{
	double *max = arr;
	if(size == 0 ) return NULL;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > *max)
		{
			max = &arr[i];
		}
	}
	return max;
}