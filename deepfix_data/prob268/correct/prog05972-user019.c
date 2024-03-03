#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<3;i++)
    memarray[i]=(int *)(malloc(n*(sizeof(int))));
    printf(" %ld %ld",memarray[2][n-1],memarray[2][n-1]+memarray[1][n-1]);
    for(i=0;i<n;i++)
    memarray[0][i]=1;
    for(i=0;i<n;i++){
    if(i>=3)
    memarray[1][i]=memarray[1][i-3]+memarray[0][i-1];
    else
    memarray[1][i]=memarray[0][i-1]; }
    for(i=0;i<n;i++){
    if(i>=5)
    memarray[2][i]=memarray[2][i-5]+memarray[1][i-3]+memarray[0][i-1];
    else if(i>=3)
    memarray[2][i]=memarray[1][i-3]+memarray[0][i-1];
    else
    memarray[2][i]=memarray[0][i-1]; }
    return 0; }