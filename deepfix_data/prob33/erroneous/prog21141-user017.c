#include <stdio.h>
int main() {
    int h,p;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&pi);
    for(int i=1;i<=p;i++){
        scanf("%d",&pf);
        if(pf<pi){
            h=h+pf-pi; }
        pi=pf; }
    if(h>0){
        printf("Yes"); }
    else{
        printf("No"); }
    return 0; }