// sum of all numbers from 0 to n:

#include<stdio.h>
int main()
{
	
	int i=1,n,sum=0;
	printf("enter number till you sum:");
	scanf("%d",&n);
	
	while(i<=n){
		
		sum=sum+i;
		i=i+1;
	}
	printf("%d",sum);
	
	
	
}

/*

output:
enter number till you sum:10
55

*/
