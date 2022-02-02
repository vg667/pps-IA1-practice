#include<stdio.h>
int input_n()
{
  int a;
  printf("enter the numbers to count the sum of:\n");
  scanf("%d",&a);
  return a;
}
int sum_n(int n)
{
  int sum=0;
  do
  {
    sum = sum+n;
    n=n-1;
  }
  while(n>0);
  return sum;
}
void output(int n,int sum)
{
  printf("%d",sum);
}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}