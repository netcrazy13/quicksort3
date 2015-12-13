#include <iostream>
#include <cmath>

using namespace std;

int quicksort( int[], int, int);
int partition( int[], int, int);

int main()
{
	
	int n,i;
	int left,right;
	
	cout <<"Input size of Array : ";
	cin >> n;	
	
	cout <<"Input Number in Array : ";
	int quick[n];
	for(i= 1;i <= n;i++)
	{
		cin >> quick[i];	
	}
	
	cout <<"NUMBER IN ARRAY : ";
	for(i = 1;i <= n;i++)
	{
		cout << quick[i] <<" ";
	}
	
	cout << endl;
	
	cout <<"INPUT LEFT SIZE : ";
	cin >> left;
	cout <<"INPUT RIGHT SIZE : ";
	cin >> right;
	
	quicksort(quick,left,right);
	
	for(i = left;i <= right;i++)
	{
		 cout << quick[i] <<" ";
	}
	return 0;	
}

int quicksort (int quick[],int left,int right)
{
	int i,j;

   if( left < right ) 
   {
   		j = partition( quick, left, right);
       	quicksort( quick, left, j-1);
       	quicksort( quick, j+1, right);
   }
	return 0;
}

int partition(int quick[],int left,int right) 
{
   int pivot, i, j, t;
   pivot = quick[left];
   i = left; j = right+1;
		
   while(1)
   {
   	do ++i; while( quick[i] <= pivot && i <= right );
   	do --j; while( quick[j] > pivot );
   	if( i >= j ) break;
   	t = quick[i]; quick[i] = quick[j]; quick[j] = t;
   }
   t = quick[left]; quick[left] = quick[j]; quick[j] = t;
   return j;
}

