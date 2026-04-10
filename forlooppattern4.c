//1 
//1 2
//1 2 3 
//1 2 3 4 
//1 2 3 4 5


#include<stdio.h>
int main()
{
	int row,column;
	for(row=1;row<=5;row++){
		for(column=1;column<=row;column++){
			printf("%d ",column);
			
		}printf("\n");
	}
}

/*

output:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/