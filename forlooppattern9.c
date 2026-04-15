

#include <stdio.h>
int main()
{
	int row,column,space;
	for(row=1;row<=4;row++){
		for(space=4;space>=row;space--)
		{
		printf("  ");
		}
	    for(column=1;column<=row;column++)
		{
	    printf("* ");	
		}printf("\n");	
	}
}