#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int i=0,k=0,j=0,num;
long getways(int x, int m) {
    if(m==1) {
        if(x==0) return 1;
        return getways(x-1,1); }
    else if(m==2) {
        int count=0;
        if(x==num && m==1) return 0;
        if(x<0) return 0;
        if(x==0) return 1;
        if(!getways(x-3,2))  {count=count+getways(x-3,1); return getways(x,1);}
        else {count=count+getways(x-3,1)+getways(x-3,2); return getways(x,1);}
        return count; } }
int main() {
    int n,res;
    scanf("%d\n",&n);
    num=n;
    res=getways(n,1)+getways(n,2);
    return 0; }