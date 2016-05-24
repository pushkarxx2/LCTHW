//here we will learn about arrays


#include<stdio.h>

int main(int argc,char *argv[])
{

int a;
int b[]={1,2,3};
char c='w';
char d[]="Hello";
char *x="World";
char *t[]={"Hey","linux","how","are","you"};


printf("Please enter an integr\n");
scanf("%d",&a);
printf("The integer you enterd is %d\n",a);


printf("the array element is %d\n%d\n%d\n ",b[0],b[1],b[2]);


printf("The string which is a charachter array that is stored is %s\n",d);

printf("The atring atored with a second methos is as follows %s\n",x);

int i;

	for(i=0;i<5;i++)
	{
		printf("The %d th element os array of strings is %s\n",i,t[i]);
	}

return 0;



}
