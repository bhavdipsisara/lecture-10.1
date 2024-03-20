#include<stdio.h>

data(x){
	printf("%d",x*x*x);
}
main()
{
	int a;
	printf("enter any number a=");
	scanf("%d",&a);
	
	data(a);
}