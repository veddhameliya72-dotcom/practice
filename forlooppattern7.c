//10 9 8 7
//6 5 4
//3 2
//1

#include<stdio.h>
int main()
{
	int row,column,num=10;
	for(row=1;row<=4;row++){
		for(column=4;column>=row;column--){
		 printf("%d ",num);
		 num--;
			
		}printf("\n");
	}
}

/*

output:
10 9 8 7
6 5 4
3 2
1

*/
