// pattern 1 4 3 16 5...

#include <stdio.h>

int main()
{
	int i, n;
	printf("enter value:");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		if(i%2==0){printf("%d\n",i*i);}
	 else{printf("%d\n",i);}
	 i+=1;
	}
	
}


/*

output:
enter value:5
1
4
3
16
5


*/