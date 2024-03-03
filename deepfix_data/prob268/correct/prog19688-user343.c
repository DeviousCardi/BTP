#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if (m==1)
       return 1;
    if (m==2)
        return (x/3)+1;
    if (m==3) {
        if (x<3)
           return   memarray[0][x-1];
        if (x<5 && x>=3)
           return   memarray[1][x-3]+memarray[0][x-1];
        else
           return   memarray[2][x-5]+memarray[1][x-3]+memarray[0][x-1]; } }
int main() {
    long int n;
       scanf("%ld",&n);
    int i,j;
    for (i=0;i<3;i++)
        memarray[i]=(long *)malloc(n*sizeof(int));
    for (i=0;i<3;i++) {
        for (j=0;j<n;j++) {
            memarray[i][j]=getways(j+1,i+1); } }
    printf("%ld",getways(n,3));
    return 0; }