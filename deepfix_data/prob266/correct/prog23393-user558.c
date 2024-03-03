#include <stdio.h>
int main() {
    int y,s=0,r,n,i;
    scanf("%d",&y);
    while(y>0) {
       r=y%10;
       y=y/10;
       s=s+r; }
    n=2016;
    while(n>0) {
        n++;
        if(n%s==0)
        break; }
    printf("%d",n); }