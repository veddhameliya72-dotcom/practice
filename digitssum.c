// sum of all digits:

#include<stdio.h>
int main()
{
	int n,first=0,last=0,l2=0,l3=0,l4=0,l5=0,l6=0,l7=0,l8=0,l9=0;
	printf("Enter any number atmost 10 digits:");
	scanf("%d",&n);
	
	last=n%10;
	while(n>=10){
		n/=10;
	    if(n>=1000000000){l9=n%10;
		                 n/=10;	
						 }
		if(n>=100000000){l8=n%10;
		                 n/=10;
		                }
		if(n>=10000000){l7=n%10;
		                 n/=10;
		                }
		if(n>=1000000){l6=n%10;
		                n/=10;
		                }                
		if(n>=100000){l5=n%10;
		            n/=10;
		            } 
						
		if(n>=10000){l4=n%10;
		            n/=10;
		            }			
		if(n>=1000){l3=n%10;
		            n/=10;
		            }					
						
		if(n>=100){l2=n%10;
		            n/=10;
		            }				
						
   }first=n;
	printf("sum of all digits is: %d",first+last+l2+l3+l4+l5+l6+l7+l8+l9);
	
}