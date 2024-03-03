#include <stdio.h>
int main(){
    int b,i,s=0,y,t,a,c,e=0;
    scanf("%d",&b);
    while(b!=0) {
        a=b%10;
        b=b/10;
        s=s+a; }
    for(i=2016;e==0;i++) {
        y=i;
        while(y!=0) {
           c=y%10;
           y=y/10;
           t=t+c; }
        if(t%s==0) {
            printf("%d",i);
            e=e+1; } }
    return 0; }