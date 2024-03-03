#include <stdio.h>
#include <stdlib.h>
long* memarray[4];
long getways(int x,int m) {
    if(x<0)
        return 0;
    else if(memarray[m][x]!=-1)
        return memarray[m][x];
   else {
        if(m==1)
            return 1;
        else if(m==2) {
            memarray[m][x]=getways(x,1)+getways(x-3,2);
            return memarray[m][x]; }
        else if(m==3) {
            memarray[m][x]=getways(x,2)+getways(x-5,3);
            return memarray[m][x]; } } }
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<4;i++) {
        memarray[i]=(long*)malloc(n*sizeof(long)); }
    for(i=0;i<4;i++) {
        for(j=0;j<20000;j++)
            memarray[i][j]=-1; }
    printf("%ld",getways(n,3));
    return 0; }