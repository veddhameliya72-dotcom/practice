//1 
//2 3
//4 5 6
//7 8 9 10

#include<stdio.h>
int main()
{
	int row,column,num;
	for(row=1;row<=4;row++){
		for(column=1;column<=row;column++){
		 num++;
		 printf("%d ",num);
			
		}printf("\n");
	}
}

/*

output:
1 
2 3
4 5 6
7 8 9 10

*/