#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1){
        return 1; }
    else if(m==2){
        int p=x/3;
        return p+1; }
    else if(m==3){
        int z=x/5;
        int count=0;
        for(int j=0;j<=z;j++){
            int w;
            w=x-5*j;
            count=count+getways(w,2); }
        return count; } }
int main() {
    int n;
    long x;
    scanf("%d",&n);
    x=getways(n,3);
    printf("%ld",x);
    return 0; }