#include<stdio.h>
int main() {
int a;
int b;
int c;
scanf("%d%d%d", &a,&b,&c);
if ((a+b<=c)||(a+c<=b)||(b+c<=a))
   { printf("INVALID");}
     else if ((a*a+b*b)==(c*c)||(a*a+c*c)==(b*b)||(b*b+c*c)==(a*a))
            { printf("RIGHT");}
     else {if ((a*a+b*b)>(c*c)||(a*a+c*c)>(b*b)||(b*b+c*c)>(a*a))
           { printf("ACUTE");}
     else  { printf("OBTUCE");}
    } return 0; }