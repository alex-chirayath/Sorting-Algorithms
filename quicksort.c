//Quick sort
#include<stdio.h>
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
	    int pos=partition(a,low,high); //place pivot ele at its proper position
	    quicksort(a,low,pos-1); //sort left sub array
	    quicksort(a,pos+1,high);//sort right sub array
	}
}
int partition(int a[],int low,int high)
{
	int down = low+1; //down counter
	int up = high;    //up counter
	int x = a[down];  //pivot element
	int temp;         //temporary variable for swapping
	
	while(down<up)
	{
		while( a[down] < x && down < high ) //if a[down] < x then increment down
			down++;
		while( a[up]>x && up>low ) //if a[up] > x then incement up
			up--;
		if(down<up) //exchange a[down] and a[up]
		{
	
			temp=a[down];
			a[down]=a[up];
			a[up]=temp;
		}
	}
	a[low]=a[up]; //exchange pivot ele with a[up]
        a[up]=x; //i.e placing pivot ele at proper position at up
	return up;
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
	printf("\nBefore Quick sort array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	 
	quicksort(a,0,n-1); //call to quicksort
	
	printf("\nAfter final sort array is: "); 
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	return 0;
}

/* OUTPUT
Enter the number of elements in an array:5 
Enter 1th element:8
Enter 2th element:6
Enter 3th element:9
Enter 4th element:3
Enter 5th element:10

Before Quick sort array is: 8   6       9       3       10
After final sort array is: 3    6       8       9       10  
*/
