//Heap sort
#include<stdio.h>
void heapify(int a[], int n , int i)
{
	int temp;
	int largest_index = i; //assume parent node at index i has max data
	int lson_index = 2*i+1; //left son of parent node i
	int rson_index = lson_index+1; //or rson = 2*i+2 right son of parent node i

	if( lson_index < n && a[largest_index] < a[lson_index]) //if leftson is present and data at left son > parent node
		largest_index = lson_index; //update largest_index to left son index
	if( rson_index < n && a[largest_index] < a[rson_index]) //if rightson is present and data at right son > largest_index node update  to right son
		largest_index = rson_index;

	if( i != largest_index) //if parent doesn't contain largest data then exchange
	{
		temp = a[i];
		a[i] = a[largest_index];
		a[largest_index] = temp;
		heapify(a,n,largest_index);//check whether parent node at index larget_index satisfy Max heap property or not
	}
}
void buildheap(int a[], int n)
{
	int i;
	for( i = n/2-1; i >= 0; i--) //start from last parent until first parent
	{
		heapify(a,n,i); //check whether parent node at index i satisfy Max heap property or not
	}
}
void heapsort(int a[],int n)
{
	int i,temp;
	buildheap(a,n); //put initial data in Max heap
	for(i = n-1; i>=1; i--) //pass n-1 till pass 1 exchange 
	{			//last ele of unsorted array with first ele of array a[0]
				
		temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		heapify(a,i,0);//check whether new data at 0 position satisfy Max heap property or not
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
	printf("\nBefore heap sort array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	 
	heapsort(a,n); //call to mergesort
	
	printf("\nAfter final sort array is: "); 
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	return 0;
}


/* OUTPUT
Enter the number of elements in an array:5
Enter 1th element:5
Enter 2th element:0
Enter 3th element:3
Enter 4th element:1
Enter 5th element:7

Before heap sort array is: 5    0       3       1       7
After final sort array is: 0    1       3       5       7   
*/
