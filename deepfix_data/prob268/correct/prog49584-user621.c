#include <stdio.h>
#include <stdlib.h>
int n,count=0;
long *memarray[3];
long getways(int x, int m) {
    if(m==1) {
        if(x%1==0)count++;
        return 0; }
    if(m==2) {
        if(x>=0)count++;
        getways(x-3,2); }
    if(m==3) {
        if(x>=0)count++;
        getways(x-5,2); } }
int main() {
    scanf("%d",&n);
    getways(n,1);
    getways(n,2);
    getways(n,3);
    printf("%d",count);
    return 0; }