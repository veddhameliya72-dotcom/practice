#include<stdio.h>
int main()
{
int i,n;
printf("enter:");
scanf("%d",&n);

i=-n;
while(i<=n){ 
printf("%d\n",n);
n=n-1;
}
	
	
}
/*

output:
enter:10
10
9
8
7
6
5
4
3
2
1
0
-1
-2
-3
-4
-5
-6
-7
-8
-9
-10

*/