// develop a program to find the largest element from the given 2D array:

#include<stdio.h>
int main()
{
	int row,n,column,m;
    int large=0; 

// asks number of rows and columns for matrix of array from user:
    printf("\nEnter the array's row size:  ");
	scanf("%d ",&n);
	printf("\nEnter the array's column size: ");
	scanf("%d ",&m);


// array[arr] is created according to info given:		
		int arr[n][m];


// aks value for matrix of array[arr] from user:
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
			printf("Enter number:\n");              
			scanf("%d ",&arr[row][column]);           
		}// column                          
	}// row

// prints largest element:
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
			if(arr[row][column]>large){
			
			large=arr[row][column];}          
		}// column                          
	}// row
 
 printf("Largest element you've entered in array is:%d",large);
}
/*

output:


*/