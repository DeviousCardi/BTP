#include <stdio.h>
#include <stdlib.h>
int n,count=0;
long *memarray[3];
long getways(int x, int m) {
    if(m==1) {
        if(x%1==0)count++;
        return 0; }
    if(m==2) {
        if(x<0)return 0;
        count++;
        getways(x-3,m); }
    if(m==2) {
        if(x<0)return 0;
        count++;
        getways(x-5,m); }
    if(m==3) {
        if(x<=0)return 0; } }
int main() {
    scanf("%d",&n);
    getways(n,1);
    getways(n,2);
    printf("%d",count-2);
    return 0; }