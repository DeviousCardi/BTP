#include <stdio.h>
int main(){
    int yb,r,i,s=0;
    scanf("%d",&yb);
    for(i=yb;i>0;i=i/10) {
        r=i%10;
        s=s+r; }
    for(i=2016;;i++) {
        if(i%s==0) {
            break; } }
    printf("%d",i);
    return 0; }