#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int i,count=0;
    if(m==2)
    return x/3 + 1;
    if(m==3) {
        for(i=0;i<=x/5;i=i++) {
            count=count+memarray[1][x-1-i*5];
            printf("%d  %d\n",count,x); }
        return count; } }
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<3;i++) {
        memarray[i]=(long*)calloc(n,sizeof(long));
        for(j=0;j<n;j++)
        memarray[i][j]=getways(j+1,i+1); }
    printf("%d",memarray[2][n-1]);
    return 0; }