// pattern 1 4 12 32....

#include <stdio.h>
int main()
{ int i=1,x=1,n;
printf("enter value:");
scanf("%d",&n);

while(i<=n){
	printf("%d\t",i*x);
	i+=1;
	x=x*2;
}
}


/*

output:
enter value:4
1       4       12      32

*/