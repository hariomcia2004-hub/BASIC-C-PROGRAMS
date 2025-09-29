#include<stdio.h>
int main()
{float a,b,c;
 printf("Enter the lenths of three sides of triangle:\n");
 scanf("%f%f%f",&a,&b,&c);
 if(a+b<=c||a+c<=b||b+c<=a)
 {printf("NO Triangle is formed.\n");
 }
 else{
 if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)){
 printf("A right angled triangle is formed.\n");
 }else if((a*a>b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)){
 	printf("An obtuse anled triangle is formed.\n");
 }
 else{
 	printf("An acute anglede triangle is formed.\n");
 }
 
 }
 return 0;
}
