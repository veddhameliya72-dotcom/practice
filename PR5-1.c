// Q1. develop a program that finds a the all negative values from the given 1 d array:


#include <stdio.h>
int main()
{
	int num,i;
	
// ask the lenght of array from user:	
	printf("Enter the array size: ");
	scanf("%d ",&num);
	
// array created [arr]:	
	int arr[num];
	
// asks values for array[arr] from user:
	for(i=0;i<num;i++){
		printf("\nEnter value for Array[%d]: ",i);
		scanf("%d ",&arr[i]);
		}
		
// prints all negative values whuch are entered:
  
  printf("\nNegative elements are: ");
    for(i=0;i<num;i++){
    	
    	if(arr[i]<0){
    		printf("%d ",arr[i]);
		}
	}		
}
/*

output:


*/