// write a program to find the average marks of the student:

#include<stdio.h>
int main()
{
	int a,b,c,sum;
	float avg;
	printf("Enter marks of english:\n");
	scanf("%d",&a);
	printf("Enter marks of maths:\n");
	scanf("%d",&b);
	printf("Enter marks of science:\n");
	scanf("%d",&c);
	sum=a+b+c;
	avg=sum/3.0;
	printf("average marks: %f\n",avg);
	
}

/*

output:
Enter marks of english:
79
Enter marks of maths:
75
Enter marks of science:
80
average marks: 78.000000

*/