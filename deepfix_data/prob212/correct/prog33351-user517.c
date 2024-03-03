#include <stdio.h>
int main() {
 int n,r,s,i,j,p,q;
 scanf("%d",&n);
    for(s=0;n!=0;n=n/10){
        r=n%10;
        s=s+r; }
    i=2016;
    if(n>2016)
    j=n;
    else
    j=2016;
    while(i%s!=0){
        i=i-1; }
    while(j%s!=0){
        j=j+1; }
    p=j-2016;
    q=2016-i;
    if(p>q)
    printf("%d",i);
    else
    printf("%d",j);
 return 0; }