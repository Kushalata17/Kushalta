//C program to enter the radius of a circle and find its diameter,circumference and area//
#include<stdio.h>
#define pi 3.14
#include<math.h>
int main()
{
	int r,d,c,a,n;
	printf("Enter the value for radius of a circle: \n");
	scanf("%d",&r);
	//r=radius
	//d=diameter
	//c=circumference
	//a=area
	d=2*r;
	c=2*pi*r;
	a=pi*pow(r,2);
	printf("diameter of the circle is %d\n",d);
	printf("circumference of the circle is %d\n",c);
	printf("area of the circle is %d",a);
return 0;
}
