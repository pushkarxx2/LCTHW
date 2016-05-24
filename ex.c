#include<stdio.h>


int main(int argc,char *argv[])
{
int a;
float b;
char x;
char str[10];

printf("\nEnter an integer number");
scanf("%d",&a);
printf("\nThe number you just entered is %d",a);

printf("\nEnter the floating point number");
scanf("%f",&b);
printf("\nThe floating number you just entered is %f",b);

printf("Enter a character");
scanf(" %c",&x);
printf("The charachter you just entered is %c",x);


printf("Enter the letters you want as string");
int i;


	for(i=0;i<10;i++)
		{
			scanf(" %c",&str[i]);
		}
printf("The final string is %s",str);
return 0;



}

