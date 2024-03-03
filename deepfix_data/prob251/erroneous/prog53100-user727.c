#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1)
    return 1;
    if(m==2) {
return getways() } }
int main() {
    int n,i,count=0,j;
    scanf("%d",&n);
    for(i=0;i<3;i++) {
        memarray[i]=(long*)calloc(n,sizeof(long));
        for(j=0;j<n;j++)
        memarray[i][j]=getways(j+1,i+1); }
    for(i=0;i<3;i++)
    count=count+memarray[i][n-1];
    printf("%d",count);
    return 0; }