// write a program to 5 students 3 subjects marks taken and total, percentage and grade also print given format:

#include<stdio.h>
int main()
{
	int Maths[5],Sci[5],Eng[5];
	int i;
	int total[5],per[5];
	char grade;
	for(i=0;i<5;i++){
		printf("enter marks of maths:[%d]\n",i);
		scanf("%d",&Maths[i]);
	}
	for(i=0;i<5;i++){
		printf("enter marks of Sci:[%d]\n",i);
		scanf("%d",&Sci[i]);
	}
	for(i=0;i<5;i++){
		printf("enter marks of Eng:[%d]\n",i);
		scanf("%d",&Eng[i]);
	}
	total[0]=Maths[0]+Sci[0]+Eng[0];
		per[0]=(total[0]/300)*100;
	total[1]=Maths[1]+Sci[1]+Eng[1];
		per[1]=(total[1]/300)*100;
	total[2]=Maths[2]+Sci[2]+Eng[2];
		per[2]=(total[0]/300)*100;
	total[3]=Maths[3]+Sci[3]+Eng[3];
		per[3]=(total[0]/300)*100;
	total[4]=Maths[4]+Sci[4]+Eng[4];
		per[4]=(total[4]/300)*100;
	
	printf("-------------------------------------------\n");
	printf("| Maths | Sci | Eng | Total | Per | Grade |\n");
	for(i=0;i<5;i++){
		total=Maths[i]+Sci[i]+Eng[i];
		per=(total/300)*100;
		if(per>90)
		grade='A';
		else if(per>=80)
		grade='B';
		else if(per>=70)
		grade='C';
		else if(per>=35)
		grade='D';
		else grade='F';
		printf(" %d     %d   %d   %d     %d   %c    \n",Maths[i],Sci[i],Eng[i],total[i],per[i],grade);
	}printf("-------------------------------------------\n");
}
