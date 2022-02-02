#include<stdio.h>
void input(int *pa,int *pb,int *pc)
{
  printf("enter three numbers\n");
  scanf("%d%d%d",pa,pb,pc);
}
void compare(int a,int b,int c,int *large)
{
  if(a>b &a>c)
  {
    *large=a;
  }
  if(b>a & b>c)
  {
    *large=b;
  }
  if(c>a & c>b)
  {
    *large=c;
  }
}
void output(int a,int b,int c,int large)
{
  printf("the biggest numbers is %d",large);
}
int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  compare(a,b,c,&large);
  output(a,b,c,large);
  return 0;
}



