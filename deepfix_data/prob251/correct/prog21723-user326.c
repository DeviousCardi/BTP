#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long count=0;
int getways(int n, int m) {
    if(n==0) {
        count++;
        return 1; }
    else if(n<0) {
        return 0; }
    else {
        return getways(n-5,2)&&getways(n-5,3); } }
int main() {
    int n;
    scanf("%d",&n);
    memarray[0]=(long *)malloc(sizeof(long)*n);
    memarray[1]=(long *)malloc(sizeof(long)*(n/3+1));
    memarray[2]=(long *)malloc(sizeof(long)*(n/5+1));
    for(int j=0;j<n;j++)
        memarray[0][j]=0;
    for(int j=0;j<(n/3+1);j++)
        memarray[1][j]=0;
    for(int j=0;j<(n/5+1);j++)
        memarray[2][j]=0;
    getways(n,3);
    printf("%ld",count);
    return 0; }