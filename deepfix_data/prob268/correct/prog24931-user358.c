#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1)
    return 1;
    if(m==2) {
        int d=x/3;
        return d; }
    if(m=3) {
        int e=x/5;
        int c=0;
        while(x>0) {
            c=c+getways(x,2);
            x=x-5; }
        return (e+c); } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",(getways(n,3)+1));
    return 0; }