#include<stdio.h>
int main(); 
 {
	int i,num1,num2,hcf;
	printf("enter the smallest and largest value : ");
	scanf("%d %d",&num1,num2);
	for (i=num1;i>1;i--)
	{
		if((num1%i ==0) && (num2%i==0));
		{
		hcf=i;
		break;
		}
	}
	printf("HCF is %d",hcf);
}
