// sum of n number:

#include<stdio.h>
int main()
{
	int last,first,sum=0;
	printf("Enter first number:\n");
	scanf("%d",&first);
	printf("Enter last number:\n");
	scanf("%d",&last);
	
	
	while(first<=last){
		
	    sum=sum+first;
	    first++;
						
   }
	printf("sum of all number's from %d till %d is: %d",first,last,sum);
	
}

/*

output:
Enter first number:
1
Enter last number:
10
sum of all number's from 11 till 10 is: 55

*/