   #include<stdio.h>
int main(void)
{
  int a,b,sum;
  print("enter the first number\n");
  scanf("%d",&a);
  printf("enter the second number\n");
  scanf("%d",&b);
  sum=sum_func(a,b);
  printf("the sum of two numbers is %d",sum);
  return(0);
}

int  sum_func(int a , int b)
{
  int sum=a+b;
  return sum;
}