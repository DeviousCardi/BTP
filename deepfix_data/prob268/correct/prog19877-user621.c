#include <stdio.h>
#include <stdlib.h>
int n,count=0;
long *memarray[3];
long getways(int x, int m) {
    if(m==1) {
        count++;
        return 0; }
    if(m==2) {
        if(x<0)return 0;
        count=count+getways(x-3,m);
        count=count+getways(x-5,m);
        return 1; } }
int main() {
    scanf("%d",&n);
    getways(n,1);
    getways(n,2);
    getways(n,3);
    printf("%d",count);
    return 0; }