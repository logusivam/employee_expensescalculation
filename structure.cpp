#include<stdio.h>
#include<conio.h>
struct employee
{
	int empno;
	char ename[25];
	float DA,HRA,PF,MA,TA,LIC,GPAY,DED,NETAMNT,BASIC;
}e;
main()
{
	float bas;
	printf("\n enter the employee no:\t");
	scanf("%d",&e.empno);
	printf("\n enter the employee name:\t");
	scanf("%s",&e.ename);
	printf("\n basic:\t");
	scanf("%f",&bas);
	printf("\n");
	e.BASIC=bas;
	e.DA=e.BASIC*12/100;
	e.HRA=e.BASIC*25/100;
	e.LIC=e.BASIC*5/100;
	e.MA=e.BASIC*10/100;
	e.PF=e.BASIC*12/100;
	e.TA=e.BASIC*15/100;
	e.GPAY=e.DA+e.HRA+e.MA+e.TA+e.BASIC;
	e.DED=e.LIC+e.PF;
	e.NETAMNT=e.GPAY+e.DED;
	printf("\n DA :%2f",e.DA);
	printf("\n MA :%2f",e.MA);
	printf("\n TA :%2f",e.TA);
	printf("\n HRA :%2f",e.HRA);
	printf("\n LIC :%2f",e.LIC);
	printf("\n GPAY :%2f",e.GPAY);
	printf("\n DEDUCTION :%2f",e.DED);
	printf("\n NETAMOUNT :%2f",e.NETAMNT);
	printf("\n PF :%2f",e.PF);
	
}

