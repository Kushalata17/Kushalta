//C program to check whether a number is even or odd//
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number: \n");
	scanf("%d",&a);
	switch(a%2){
		case 1 :
		printf("Number entered is even");
		break;
		case 2 :
		printf("Number enteredis odd");
		break;
		default:
		printf("default");
		break;	
	}
return 0;
}
