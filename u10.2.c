#include<stdio.h>

data(a){
	if(a%3==0 &&  a%5==0)
	{
		printf("this number is division");
	}
	else
	{
		printf("this number is not division");
	}
	
}
main()
{
	int a;
	printf("enter any number a=");
	scanf("%d",&a);
	
	data(a);
}