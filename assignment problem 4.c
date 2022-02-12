//C program to enter two numbers and perform all arithmetic operations//
#include<stdio.h>
int main()
{
	int a,b,n;
	printf("Enter the value for a: \n");
	scanf("%d",&a);
	printf("Enter the value for b: \n");
	scanf("%d",&b);
	printf("Enter the choice of the required operation to be done: \n");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("sum is %d",a+b);
			break;
		case 2:
			printf("difference is %d",a-b);
			break;
		case 3:
			printf("multiplication is %d",a*b);
			break;
		case 4:
			printf("division is %d",a/b);
			break;
		case 5:
			printf("remainder is %d",a%b);
			break;
		default:
			printf("default");
			break;
	}
return 0;

}
