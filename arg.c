//Here we will see the importance of argc and argv

#include<stdio.h>

int main(int argc,char *argv[])
{

int i=0;

	for(i=1;i<argc;i++)
	{
	  printf("The arguments passed is %s",argv[i]);

	}
return 0;
}
