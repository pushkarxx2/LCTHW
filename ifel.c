//Here we will see the use of if else sentence
//we will make use of enginerring marks terminology of passing nmarks as 40 in this program

#include<stdio.h>


int main(int argc,char *argv[])
{

int mark;


printf("Enter the marks you obtained");
scanf("%d",&mark);

	if(mark<40)
	{
	  printf("The marks you obtained are not sufficient for you to pass\n");

	}
	else if(mark==40)
	{
	 printf("You jus barely passed tyhis engineering subject\n");
	}
	else if(mark>40)
	{
	printf("You have passed this subject");
	}
	else if(mark==100)
	{
	printf("You have passed and scored maximum marks");
	}






return 0;
}
