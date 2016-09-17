// Merge Sort
#include<stdio.h>
void mergelist(int a[],int lb1,int ub1,int lb2,int ub2)
{
	int i=lb1;
	int j=lb2;
	int k=0;
	int c[20];
	
	while(i<=ub1 && j<=ub2)
	{
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	while(i<=ub1)
		c[k++]=a[i++];
	while(j<=ub2)
		c[k++]=a[j++];
	for(i=0,j=lb1;j<=ub2;i++,j++)
		a[j]=c[i];
}

void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		mergelist(a,low,mid,mid+1,high);
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
	printf("\nBefore merge sort array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	 
	mergesort(a,0,n-1); //call to mergesort
	
	printf("\nAfter final sort array is: "); 
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	return 0;
}

/* OUTPUT
Enter the number of elements in an array:5
Enter 1th element:3
Enter 2th element:2
Enter 3th element:0
Enter 4th element:5
Enter 5th element:-1

Before merge sort array is: 3   2       0       5       -1
After final sort array is: -1   0       2       3       5       bash-3.2$ 

*/
