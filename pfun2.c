//here we will use pointer and some of their usage in c


#include<stdio.h>

int main(int argc,char *argv[])
{

int num[3];
int *ptr=num;

printf("Enter numbers");
scanf("%d %d",ptr,(ptr+1));
printf("The numbers are %d %d",*ptr,*(ptr+1));

return 0;

}
