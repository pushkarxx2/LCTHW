//here we will learn about the functions and their arguments and passing arguments to the functions


#include<stdio.h>

//Function prototype declaration
int addition(int x,int y);
float cirarea(int u);

int main(int argc,char *argv[])
{

int i;
int j;
int o;
float r;


printf("Enter the first vale");
scanf("%d",&i);
printf("Enter ther second value");
scanf("%d",&j);
o=addition(i,j);
printf("The addition of both the numbers is %d\n",o);

printf("The value of addition is actually the radius of a circle\n");
r=cirarea(o);
printf("The area of the circle is %f\n",r);
}

//Function working
int addition(int x,int y)
{
 int z;
 z=x+y; 
 return z;

}

float cirarea(int u)
{
 float area;
 area=3.14*u*u;
 return area;
}
