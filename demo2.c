//Here we will deal with string and try to see their usage in c 


#include<stdio.h>



int main(int argc,char *argv[])
{

char password[5]="pushk";
char input[5];

printf("Enter the Password");

int i;
	for(i=0;i<5;i++)
		{
		scanf(" %c",&input[i]);
		}
	if((input[0]==password[0])&&(input[1]==password[1]))
	{
		printf("The password you entered is correct");
	}
	else
	printf("The password you entered is incorrect");
return 0;

}
