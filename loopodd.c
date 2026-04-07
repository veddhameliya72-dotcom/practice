// print odd numbers from 1 to n:

#include <stdio.h>
int main()
{
	int i,n;
	printf("enter value of n:");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		if(i%2!=0)printf("%d\n",i);
		i++;
		
	}
	
}

/*

output:
enter value of n:10
1
3
5
7
9

*/