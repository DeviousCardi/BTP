#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int count=0;
long getways(int x, int m) {
    int d;
    if(m==2) {
        d=x/3;
        count=count+(d-1);
        return count; }
    if(m==3) {
        d=x/5;
        for(int i=2;i<=d+1;i++) {
            count=count+i; }
        return count+getways(x%5,m-1); } }
int main() {
    int n;
    scanf("%d",&n);
    int h=getways(n,3);
    printf("%d",h);
    return 0; }