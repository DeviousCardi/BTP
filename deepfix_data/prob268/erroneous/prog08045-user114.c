#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    r=0;
    if(m==1) return 1;
    if(n==0) return 1;
    if(n < 0) return 0;
    else {
        for(int i=1;i<=2*m+1;i=i+2) {
            for(int j=1;j<=m;j++)
             R = getways(n-(2*m-1),j);
             r=R+r; } }
    return r; }
int main() {
    int n,h=0;
    scanf("%d",&n);
    for(int i=1;i<4;i++) {
      h = h+getways(n,i); }
    printf("%d",h);
    return 0; }