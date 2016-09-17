//Modified bubble sort

#include<stdio.h>
#define TRUE 1
#define FALSE 0
void bubblesort(int a[], int n)
{
	int pass,exchanged = TRUE, i, temp; //initially set exchanged = TRUE

	for(pass = 1; pass<= n-1 && exchanged; pass++)//no of passes 1 to n-1
	{
		exchanged = FALSE; //in every pass initially reset exchanged flag
		for(i = 0; i < n-pass ; i++)// set of comparision
		{                            //no of comparision = n-current pass no
			if( a[i] > a[i+1]) //if first element > second element then swap them
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
				exchanged = TRUE; //since there is swapping set exchaged flag
			}
		}
	
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
	printf("\nBefore bubble sort array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	 
	bubblesort(a,n); //call to mergesort
	
	printf("\nAfter final sort array is: "); 
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	return 0;
}

