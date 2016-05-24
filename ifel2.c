//here again we are going to look for usage of if else


#include<stdio.h>

int main(int argc,char *argv[])
{

	if(argc==1)
	{
	printf("You have only one arumeent from the command prompt\n");
	}
	else if((argc>1)&&(argc<5))
	{
	printf("you have more than one arguments\n");
	int i;
		for(i=1;i<argc;i++)
		{
			printf("The %dst argmunet is %s\n",i,argv[i]);
		}
	}
	else
	{
	printf("You have more than 5 arguments ,you suck!\n");
	}
return 0;



}
