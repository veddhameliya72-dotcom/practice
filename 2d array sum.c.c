// sum of two two-dimensional array:

#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3],b[3][3];
	int sum[3][3];

// asks value of a:

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("enter value:\n");
		scanf("%d",&a[i][j]);
		}
	}

// asks value for b:

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("enter value:\n");
		scanf("%d",&b[i][j]);
		}
	}
	
// print:

for(i=0;i<3;i++){
	
// for a:
	for(j=0;j<3;j++){
		printf("%d ",a[i][j]);
		printf(" ");}
		printf("\t");
		
// for b:
     for(j=0;j<3;j++){
			printf("%d ",b[i][j]);		
		    printf(" ");}
		    printf("\t");
		    
// for sum:
     for(j=0;j<3;j++){
			printf("%d ",a[i][j]+b[i][j]);
			printf(" ");}
			
			printf("\t");
			   
	        printf("\n");
	
	
	
}
	
}
/*

output:
enter value:
1
enter value:
2
enter value:
3
enter value:
4
enter value:
5
enter value:
6
enter value:
7
enter value:
8
enter value:
9
enter value:
9
enter value:
8
enter value:
7
enter value:
6
enter value:
5
enter value:
4
enter value:
3
enter value:
2
enter value:
1
1  2  3         9  8  7         10  10  10
4  5  6         6  5  4         10  10  10
7  8  9         3  2  1         10  10  10


*/
