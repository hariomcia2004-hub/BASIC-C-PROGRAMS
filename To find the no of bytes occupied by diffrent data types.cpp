#include<stdio.h>
int main()
{ int inttype;
float floattype;
double doublet;
char chartype;
printf("Size of int: %zu bytes\n",sizeof(inttype));
printf("Size of float: %zu bytes\n",sizeof(floattype));
printf("Size of double: %zu bytes\n",sizeof(doublet));
printf("Size of character: %zu bytes\n",sizeof(chartype));

return 0;
}
