#include <stdio.h>

int arr1[9] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };

int arr2[9] = { 90, 80, 70, 60, 50, 40, 30, 20, 10 };

 
int Count1[9] = { 0 };

int Count2[9] = { 0 };


 
int
bubbleSort (int arr[], int n, int Count[])
{
  
int totalSwaps = 0;
  
for (int i = 0; i < n - 1; i++)
	{
	  
for (int j = 0; j < n - i - 1; j++)
		{
		  
if (arr[j] > arr[j + 1])
			{
			  
int temp = arr[j];
			  
arr[j] = arr[j + 1];
			  
arr[j + 1] = temp;
			  
Count[arr[j]]++;
			  
Count[arr[j + 1]]++;
			  
totalSwaps++;
			
}
	
} 
} 
printf ("Total number of swaps: %d\n", totalSwaps);

} 
 
int

main ()
{
  
bubbleSort (arr1, 9, Count1);
  
bubbleSort (arr2, 9, Count2);
  
printf("array 1 bubbleSort") ;
printf ("arr1:\n");
  
for (int i = 0; i < 9; i++)
	{
	  
printf ("%d: %d\n", arr1[i], Count1[arr1[i]]);
	
} 
printf("array 2 bubbleSort");
 
printf ("\narr2:\n");
  
for (int i = 0; i < 9; i++)
	{
	  
printf ("%d: %d\n", arr2[i], Count2[arr2[i]]);
	
} 
 
return 0;

}


