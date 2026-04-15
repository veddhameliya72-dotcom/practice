// half diamond

#include<stdio.h>
int main()
{
 int  row,column,space;
	for(row=1;row<=3;row++){
		for(column=1;column<=row;column++){
			printf("*");
		}printf("\n");
	}for(row=1;row<=2;row++){
		for(column=2;column>=row;column--){
			printf("*");
		}printf("\n");
	}
}

/*

output:
*
**
***
**
*

*/