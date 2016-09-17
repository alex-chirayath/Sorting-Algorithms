//Shell sort
#include<stdio.h>
void insertionsort(int a[], int n , int sindex, int k)
{
	int pass;
	for(pass = sindex+k; pass < n; pass = pass+k)
	{
		int x = a[pass];
		int i = pass-k;

		while( i >= 0)
		{
			if( a[i] < x)
				break;
			a[i+k] = a[i];
			
			i = i-k;
		}
		a[i+k] = x;
	}
}

void shellsort(int a[],int n)
{
	int i,incrementsize = n/2, pass, subarray,startindex; //increment size

	for(pass = 1; incrementsize >=1 ; pass++) 
	{
		//printf("\nelements in pass %d: ",pass);
		for(subarray = 1; subarray <= incrementsize; subarray++) 
		{
			startindex = subarray-1; 
			//printf("\nelements in subarray %d: ",subarray);
			//for(i = startindex ;i < n; i=i+incrementsize)
			//	printf("%d\t",a[i]);
			
			insertionsort(a , n ,startindex,incrementsize);
		}
		incrementsize/=2; //in every pass increment size is reduced.
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
	printf("\nBefore shell sort array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	 
	shellsort(a,n); //call to mergesort
	
	printf("\nAfter final sort array is: "); 
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	return 0;
}

