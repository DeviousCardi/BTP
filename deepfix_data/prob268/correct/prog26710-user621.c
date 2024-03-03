#include <stdio.h>
#include <stdlib.h>
int n,count=0;
long *memarray[3];
long getways(int x, int m) {
    if(x<0)return 0;
    if(m==1) {
        if(x%1==0)count=count+1;
        if(x%3==0)count=count+1;
        if(x%5==0)count=count+1; }
    if(m==2) {
       getways(x-3,m)||getways(x-5,m);
       count++; }
    if(m==2) {
       getways(x-3-5,m);
       count++; } }
int main() {
    scanf("%d",&n);
    getways(n,1);
    getways(n,2);
    getways(n,3);
    printf("%d",count);
    return 0; }