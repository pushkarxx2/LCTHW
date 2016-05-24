//here today we are going to look for the usage ad concept of pointer


#include<stdio.h>

int main(int argc,char *argv[])
{

int x=3;

int i;

int *ptr=&x;

//printf("what is x %d",x);
printf("This is to cross verify %p\n",&x);
printf("The answer is %p\n",ptr);
printf("The answer is %d\n",*ptr);

return 0;
}
