#include<stdio.h>
main()
{ int a,b,c;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);
  printf("The two numbers are %d and %d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("the numbers after swapping are %d and %d\n",a,b);


  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);
  printf("The two numbers are %d and %d\n",a,b);
  a+=b;
  b=a-b;
  a=a-b;
  printf("the numbers after swapping are %d and %d\n",a,b);
}

