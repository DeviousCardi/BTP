#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int main() {
    int rup,count=0,i,j,k;
    scanf("%d",&rup);
    i=rup/3;
    j=rup/5;
    k=(i+1)*(j+1);
    k=k-((j-((rup-(i*3))/5))-(i-((rup-(j*5))/3)))/2;
    printf("%d",k);
    return 0; }