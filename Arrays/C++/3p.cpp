#include <iostream>

using namespace std;


int Sort_Binary(int A[], int n)
{
	int pivot = 1;
	int j = 0;

	for (int i = 0; i < n; i++)
	{
		if (A[i] < pivot)
		{
//		  int temp=A[i];
		  A[i],A[j]=A[j],A[i];
//		  A[j]=temp;
		  j++;
		}
	}
}

int main(void)
{
	int A[] = { 1, 0, 0, 0, 1, 0, 1, 1 };
	int n = sizeof(A)/sizeof(A[0]);

	Sort_Binary(A, n);

	for (int i = 0 ; i < n; i++) {
		cout<<A[i];
	}
	cout<<endl;

	return 0;
}
