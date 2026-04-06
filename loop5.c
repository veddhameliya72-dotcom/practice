#include <stdio.h>
int main()
{
	int i=1,num;
	printf("enter till which square you want:");
	scanf("%d",&num);
	
	while(i<=num){
		printf("%d\t",i*i);
		i=i+1;
	}
}
\*

output:
enter till which square you want:10
1       4       9       16      25      36      49      64      81      100

*\
