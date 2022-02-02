#include<stdio.h>
int input()
{
  int a;
  printf("enter the numbers\n");
  scanf("%d",&a);
  return a;
}
int compare(int a,int b,int c)
{
  int large;
  if(a>b & a>c)
  {
    large=a;
  }
  if(b>a & b>c)
  {
    large=b;
  }
  if(c>a & c>b)
  {
    large=c;
  }
  return large;
}
void output(int a,int b,int c,int large)
{
  printf("the biggest numbers is %d",large);
}
int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
  large=compare(a,b,c);
  output(a,b,c,large);
  return 0;
}