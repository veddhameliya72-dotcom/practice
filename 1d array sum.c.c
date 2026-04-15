// sum of array a and b:

#include<stdio.h>
int main()
{
	int a[5],b[5];
	int i,sum;
	
	for(i=0;i<5;i++){
		printf("enter value of: a[%d]\n",i);
		scanf("%d",&a[i]);
    } 
    	for(i=0;i<5;i++){
		printf("enter value of: b[%d]\n",i);
		scanf("%d",&b[i]);
		
    }
	 
    printf("---------------\n");
    printf("|a    b    sum|\n");
    printf("---------------\n");
    for(i=0;i<5;i++){
    	printf("|%d   %d   %d|\n",a[i],b[i],a[i]+b[i]);
	}printf("---------------\n");
}
/*

output:
enter value of: a[0]
10
enter value of: a[1]
20
enter value of: a[2]
30
enter value of: a[3]
40
enter value of: a[4]
50
enter value of: b[0]
90
enter value of: b[1]
80
enter value of: b[2]
70
enter value of: b[3]
60
enter value of: b[4]
50
---------------
|a    b    sum|
---------------
|10   90   100|
|20   80   100|
|30   70   100|
|40   60   100|
|50   50   100|
---------------


*/