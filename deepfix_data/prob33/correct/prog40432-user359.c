#include <stdio.h>
int main() {
    int h,p,i,x,t,k;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&x);
    for(i=1;i<=p;i++){
        t=x;
        scanf("%d",&x);
        if((x-t)<0){
            k=h+(x-t); } }
    printf("%d\n",k);
    if(k<=0){
        printf("No"); }
    else{
        printf("Yes"); }
    return 0; }