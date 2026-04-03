#include<stdio.h>
int main()
{
	int a, b;
	printf("enter two numbers.");
	scanf("%d%d",&a,&b);
	int formula=a*a+2*b*a+b*b;
	printf("whole sq: %d",formula);
}