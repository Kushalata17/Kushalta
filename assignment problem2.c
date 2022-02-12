//C program to find maximum between two numbers//
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter value for a: \n");
	scanf("%d,&a");
	printf("Enter value for b: \n");
	scanf("%d",&b);
	if(a>b){
		printf("max num is %d",a);
	}
	else{
		printf("max num is %d",b);
	}
	return 0;
}
