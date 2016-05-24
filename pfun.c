//We are going to try exchanging variables using pointers

#include<stdio.h>

int main(int argc,char *argv[])
{

int i;
int j;

int r;
printf("Enter the first value\n");
scanf("%d",&i);
printf("The first value entered is %d\n",i);
printf("Enter the second values\n");
scanf("%d",&j);
printf("The second value is %d\n",j);

int *ptr=&i;
int *ptr2=&j;

printf("The memory adddress stores in ptr round 1 is %d\n",ptr);
printf("The value atored by ptr round 1is %d\n",*ptr);


printf("The meory address storerd in ptr2 round 1 is %d\n",ptr2);
printf("The value stored by ptr2 round 1 is %d\n",*ptr2);

r=ptr;
ptr=ptr2;
ptr2=r;

printf("The memory address in ptr round 2 is %d\n",ptr);
printf("The value stored by ptr round 2 is %d\n",*ptr);

printf("The memory address in ptr2 round2 is %d\n",ptr2);
printf("Thje value stored by ptr2 is %d\n",*ptr2);

return 0;

}
