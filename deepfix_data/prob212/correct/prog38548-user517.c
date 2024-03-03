#include <stdio.h>
int main() {
 int n,r,s,i,j;
 scanf("%d",&n);
    for(s=0;n!=0;n=n/10){
        r=n%10;
        s=s+r; }
    i=2016;
    j=2016;
    while(i%s!=0||j%s!=0){
        i=i-1;
        if(i%s==0){
        printf("%d",i);
        break; }
        j=j+1;
        if(j%s==0){
            printf("%d",j);
            break; } }
    printf("%d",i);
 return 0; }