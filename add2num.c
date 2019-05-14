                                                add2num.c

#include<stdio.h>
void get_input(int *a,int *b)
{
printf("enter the value of a and b\n");
scanf("%d %d",a,b);
}
int add_num(int *a,int *b)
{
int x;
x= *a + *b;
return x;
}
void output(int p)
{
 printf("%d",p);
}
int main()
{
 int a,b,x;
 get_input(a,b);
 add_num(a,b);
 output(x);
}










