#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    long i,j,k,cou=0;
     for(i=0;i<=x;i++) {
         for(j=0;j<=(x/3);j++) {
             for(k=0;k<=(x/5);k++) {
                 if(x==i+(3*j)+(5*k))
                 cou++; } } }
    return cou; }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,0));
    return 0; }