// pattern  1 2 3 5 8 13 21.... fibbonaci series

#include <stdio.h>
int main()
{
	int c,n,ne,p=0;
	printf("enter value:");
	scanf("%d",&n);
	c=1;
	while(c<=n){
		ne=p+c;
		printf("%d\t",c);
		p=c;
		c=ne;
		
	}
}


/*

output:
enter value:21
1 1 2 3 5 8 13 21

*/