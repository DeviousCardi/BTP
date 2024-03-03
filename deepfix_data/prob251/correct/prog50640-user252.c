#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int i=0,k=0,j=0,num;
long getways(int x, int m) {
    if(m==1) {
        if(x==0) return 1;
        return getways(x-1,1); }
    else if(m==2) {
        if(x<0) return 0;
        if(x==0) return 1;
        int temp=getways(x,1);
        return getways(x-3,2)+temp; }
    else if(m==3) {
        if(x<0) return 0;
        if(x==0) return 1;
        int temp=getways(x,2);
        return getways(x-5,3)+temp; } }
int main() {
    int n,res;
    scanf("%d\n",&n);
    num=n;
    res=getways(n,2);
    printf("%d\n",res);
    return 0; }