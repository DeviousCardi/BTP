#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1)
    return 1;
    if(m==2) {
        int d=x/3;
        return (d+getways(x,1)); }
    else {
        int e=x/5;
        int i=1;
        int c=0;
        x=x-5;
        while(x>0) {
            c=c+getways(x,2);
            i++;
            x=x-i*5; }
        return (e+c); } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",getways(n,3));
    return 0; }