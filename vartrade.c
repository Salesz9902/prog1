#include <stdio.h>

int main()
{
//change the values with an extra variable
int a, b, c;
a=2;
b=5;
c=0;

//before the trade
printf("csere elott:\na=%d, b=%d\n",a,b);
c=a;
a=b;
b=c;
//after the trade
printf("csere utan:\na=%d, b=%d\n",a,b);

//no extra variable used..
//change values with exor
a=3;
b=8;

//values before the trade
printf("\ncsere exorral:\n");
printf("csere elott:\na=%d, b=%d\n",a,b);

a=a^b;
b=a^b;
a=a^b;

printf("csere utan:\na=%d, b=%d\n",a,b);
}
