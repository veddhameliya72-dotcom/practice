// pattern A to Z:

#include <stdio.h>
int main()
{
char i,n;
printf("enter last alphabet:");
scanf("%c",&n);
for(i='a';i<=n;i+=2){printf("%c ",i);
}
}

/*

output:
enter last alphabet:z
a c e g i k m o q s u w y

*/