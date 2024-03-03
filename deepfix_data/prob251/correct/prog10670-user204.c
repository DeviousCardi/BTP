#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1) {
        return 1; }
    if(m==2) {
        int a=x/3;
        return a+ getways(a,m-1); }
    if(m==3) {
        int b=x/5;
        return b +getways(x,m-1); } }
int main() {
    int n;
    scanf("%d",&n);
    int m=getways(n,3);
    printf("%d",getways(n,3));
    return 0; }