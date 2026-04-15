// hollow square

#include<stdio.h>
int main()
{
	int row,column;
	for(row=1;row<=5;row++){
	for(column=1;column<=5;column++){
	
		if(row==1||row==5||column==1||column==5)printf("* ");
		else printf("  ");
       } printf("\n");
	}
}

/*

output:
* * * * *
*       *
*       *
*       *
* * * * *


*/