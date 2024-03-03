#include <stdio.h>
#include <stdlib.h>
int main() {
int am;
float ti;
scanf("%0.2d",&am);
if(am<=200000)
ti=0;
else
if(am>=200001&&am<=500000)
ti=(10.0/100)*200000;
else
if(am>=500001&&am<=1000000)
ti =30000+(20.0/100)*500000;
else
ti=130000+0.3*1000000;
printf("%f",ti);
return 0; }