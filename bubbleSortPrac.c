#include<stdio.h>

void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a= *b;
	*b= t;
}

void bubbleSort(int a[], int n)
{
	int i, j, flag;
	
	for(i=0;i<n-1;i++)
	{
		flag = 0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			 swap(&a[j],&a[j+1]);
			 flag = 1;
			}
		}
		
		if(flag == 0)
		 break;
		
		
	}
}

void print(int a[], int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
}


int main()
{ int arr[] ={1,3,2,5,7,8,0};
int n = sizeof(arr)/sizeof(arr[0]);

bubbleSort(arr, n);
print(arr,n);
	
	return 0;
}
