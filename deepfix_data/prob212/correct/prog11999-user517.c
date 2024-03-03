#include <stdio.h>
int main() {
 int n,r,s,p;
 scanf("%d",&n);
 p=n;
    for(s=0;n!=0;n=n/10){
        r=n%10;
        s=s+r; }
    while(p%s!=0){
        p=p-1; }
 printf("%d",p);
    return 0; }