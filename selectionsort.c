//Selection sort 

#include<stdio.h>

void selectionsort(int a[], int n)
{

	int pass, min,pos,i;
	//in pass 1 entire array is unsorted indices are 0 to n-1
	//in pass 2 unsorted array indices are 1 to n-1
	//in pass n-1 ie last pass unsorted array indices are n-2 to n-1
	for(pass = 1; pass <= n-1; pass++)
	{
		min = a[pass-1];//first element of unsorted array assumed to be min
		pos = pass-1; //note down position of unsorted array.

		i = pass;
		while( i < n) //compare current min with  array ele
		{
			if( a[i] < min) //update min and position of min
			{
				min = a[i];
				pos = i;
			}
			
			i++; //next ele of array
		}
		a[pos] = a[pass-1]; //exchange min ele with first element of unsorted array 
		a[pass-1] = min;
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
	 
	selectionsort(a,n); //call to mergesort
	
	printf("\nAfter final sort array is: "); 
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	

	return 0;
}


/* OUTPUT
Enter the number of elements in an array:5
Enter 1th element:4
Enter 2th element:8
Enter 3th element:2
Enter 4th element:0
Enter 5th element:-1

Before  sort array is: 4  8       2       0       -1
After final sort array is: -1   0       2       4       8     
*/
