#include <stdio.h>
int main()
{
	int x, y, z;
	printf("value of x y and z");
	scanf("%d%d%d",&x,&y,&z);
	int max=x*(x>y&&x>z)+y*(y>x&&y>z)+z*(z>x&&z>y);
	printf("max%d",max);
	
	}