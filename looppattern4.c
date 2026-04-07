// pattern A to Z:

#include <stdio.h>
int main()
{
char i,n;
printf("enter last alphabet:");
scanf("%c",&n);
for(i='a';i<=n;i+=1){printf("%c ",i);
}
}

/*

output:
enter last alphabet:z
a b c d e f g h i j k l m n o p q r s t u v w x y z

*/