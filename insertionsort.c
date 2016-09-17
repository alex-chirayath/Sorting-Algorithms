//Insertion sort
#include<stdio.h>
void insertionsort(int a[], int n)
{
	int pass,x,pos,i;
	for(pass = 1; pass <= n-1; pass++)
	{
		x = a[pass];
		pos = pass;

		i = pass-1;
		while( i >= 0)
		{
			if( a[i] < x)
				break;
			a[i+1] = a[i];

			i--;
		}

		a[i+1] = x;
    }
}
int main()
{
	int a[20], n , i;

	printf("Enter the number of elements in an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %dth element:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nBefore sort array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	insertionsort(a,n); //call to mergesort

	printf("\nAfter final sort array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	return 0;
}


/* OUTPUT
Enter the number of elements in an array:5
Enter 1th element:0
Enter 2th element:-22
Enter 3th element:-11
Enter 4th element:4
Enter 5th element:2

Before sort array is: 0 -22     -11     4       2
After final sort array is: -22  -11     0       2       4
*/


