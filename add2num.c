                                                add2num.c

#include<stdio.h>
void get_input(int *a,int *b)
{
printf("enter the value of a and b\n");
scanf("%d %d",a,b);
}
int add_num(int a,int b,int *c) 
{
*c= a + b;
}
void output(int c)
{
 printf("%d",c);
}
int main()
{
 get_input(&x,&y);
 add_num(a,b);
 output(c);
}










