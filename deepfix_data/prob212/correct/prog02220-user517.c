#include <stdio.h>
int main() {
 int n,r,s,i,j;
 scanf("%d",&n);
    for(s=0;n!=0;n=n/10){
        r=n%10;
        s=s+r; }
    i=2016;
    j=2016;
    while(i%s!=0){
        i=i-1; }
    while(j%s!=0){
        j=j+1; }
    printf("%d\n",i);
    printf("%d",j);
 return 0; }