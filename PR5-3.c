// column turns into row, row turns into column;

#include<stdio.h>
int main()
{
	int row,n,column,m;


// asks number of rows and columns for matrix of array from user:
    printf("enter the number of row: ");
	scanf("%d ",&n);
	printf("enter the number of column: ");
	scanf("%d ",&m);


// array[arr] is created according to info given:		
		int arr[n][m];


// aks value for matrix of array[arr] from user:
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
			printf("enter number:\n");              
			scanf("%d",&arr[row][column]);           
		}// column                          
	}// row


// printd the transpose matrix:	
	printf("transpose matrix:\n");
	for(column=0;column<m;column++){
		for(row=0;row<n;row++){
			printf("%d ",arr[row][column]);
		}
		printf("\n");
	}
}

/*

output:

*/