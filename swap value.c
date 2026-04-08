// swap value using addition subtraction:

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swaped value of a: %d and b: %d",a,b);
}

/*

output:
Enter value of a:2
Enter value of b:3
swaped value of a: 3 and b: 2


*/