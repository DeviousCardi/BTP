#include <stdio.h>
int main() {
    int h,p,i,x,t,k,q;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&x);
    for(i=1;i<p;i++){
        t=x;
        scanf("%d",&x);
        q=x-t;
        if(q<0){
            k=h+q; } }
    if(k<=0){
        printf("No"); }
    else{
        printf("Yes"); }
    return 0; }