#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
 m=3;
 int a,c;
if(x>=5){a=x%5;}
int b=x/5;
if(x>=3){c=x%3;}
int d=x/3;
return a+b+c+d; }
int main() {
    int x,m,z;
    scanf("%d", &x);
    z= getways(x,m);
    printf("%d", z+1);
    return 0; }