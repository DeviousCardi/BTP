#include <stdio.h>
int main() {
 int n,r,s,i,j;
 scanf("%d",&n);
    for(s=0;n!=0;n=n/10){
        r=n%10;
        s=s+r; }
    i=2016;
    j=2016;
    while(i%s==0){
        i=i-1; }
 return 0; }