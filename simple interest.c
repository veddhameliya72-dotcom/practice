#include <stdio.h>
int main()
{
	int p,r,t;
	
	printf("enter value of principle (p);");
	scanf("%d",&p);
	
		printf("enter value of rate (r);");
		scanf("%d",&r);
		
			printf("enter value of time (t);");
			scanf("%d",&t);
			
			printf("simple interest calculated: %d",p*r*t/100);	
}