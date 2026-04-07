//print even numbers from 1 to n:

#include <stdio.h>
int main()
{
	int i, n ;
	printf("enter number:");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		
		if(i%2==0)printf("%d\n",i);
		i=i+1;
		
		
	}
}


/*

output:
enter number:10
2
4
6
8
10

*/