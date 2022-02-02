#include<stdio.h>
void input_two_numbers(int *a,int *b)
{
  printf("Enter two numbers\n");
  scanf("%d%d",a,b);
}
void find_sum(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int c)
{
  printf("sum of %d + %d is %d\n",a,b,c);
}
int main()
{
  int x,y,z;
  input_two_numbers(&x,&y);
  find_sum(x,y,&z);
  output(x,y,z);
  return 0;
}