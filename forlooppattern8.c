//0
//1 0
//0 1 0
//1 0 1 0
//0 1 0 1 0

#include<stdio.h>
int main()
{
	int row,column;
	for(row=1;row<=5;row++){
		for(column=1;column<=row;column++){
			printf("%d ",(row+column)%2);
		}printf("\n");
	}
}

/*

output:
0
1 0
0 1 0
1 0 1 0
0 1 0 1 0


*/