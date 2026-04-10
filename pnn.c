// write aprogram to find if  the given number is neutral or not using the ladder if else.

#include<stdio.h>
int main()
{
	
	int num;
	printf("Enter your number:");
	scanf("%d",&num);
	
	if(num>0){printf("The number is positive.",num);
	           }else if(num==0){printf("The number is neutral.",num);
			                  }else {printf("The number is negative.",num);
							               }
	
}

/*

output:
Enter your number:1
The number is positive.

Enter your number:0
The number is neutral.

Enter your number:-9
The number is negative.
 
*/