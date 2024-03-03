#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if(m==1&&x>0)
        return 1;
    if(memarray[m][x]!=-1)
        return memarray[m][x];
    long i=0,res=0;
    while((x-(((2*m)-1)*i))!=0) {
        res=res+getways(x-(((2*m)-1)*i),m-1);i++; }
    return res=memarray[m][x]; }
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<3;i++) {
        memarray[i]=(long*)malloc(n*sizeof(long)); }
    for(int i=0;i<3;i++) {
        for(int j=0;j<n;j++) {
            memarray[i][j]=-1; } }
    printf("%ld",getways(n,3));
    return 0; }