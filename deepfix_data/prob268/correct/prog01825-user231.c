#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int main() {
    int rup,count=0,i,j,k;
    scanf("%d",&rup);
    i=rup/3;
    j=rup/5;
    k=(i+1)*(j+1);
    printf("%d %d %d",k,i+1,j+1);
    return 0; }