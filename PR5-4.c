// develop a program to find the sum of row or clumn:

#include<stdio.h>
int main()
{
	int row,n,column,m;
    int sum_row,sum_column;
    int sumr=0,sumc=0;

// asks number of rows and columns for matrix of array from user:
    printf("\nEnter the array's row size: ");
	scanf("%d ",&n);
	printf("\nEnter the array's column size: ");
	scanf("%d ",&m);


// array[arr] is created according to info given:	
		int arr[n][m];


// aks value for matrix of array[arr] from user:
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
			printf("\na[%d][%d]:",row,column);              
			scanf("%d",&arr[row][column]);           
		}// column                          
	}// row

// asks row no.:
printf("\nEnter row number:");
scanf("%d",&sum_row);

// prints element of row:
printf("\nElements of row are: ");
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
		if(row==sum_row){
			printf("%d ",arr[row][column]);
		}           
		}// column                          
	}// row

// prints sum of row:
printf("\nSum of row: ");
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                   	
		if(row==sum_row){
			sumr=sumr+arr[row][column];
		}
		}// column                          
	}// row
	printf("%d ",sumr);

// asks row no.:
printf("\n\nEnter column number:");
scanf("%d",&sum_column);

// prints element of row:
printf("\nElements of column are: ");
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
		if(column==sum_column){
			printf("%d ",arr[row][column]);
		}           
		}// column                          
	}// row

// prints sum of column:
printf("\nSum of column: ");
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                   	
		if(column==sum_column){
			sumc=sumc+arr[row][column];
		 }
		}// column                          
	}// row
		printf("%d",sumc);
}
	