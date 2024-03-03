#include <stdio.h>
int main() {
    int h,n,high,p;
    scanf("%d%d",&h,&n);
    scanf("%d",&p);
    high=p;
        while(h!=0){
        scanf("%d",&p);
        if(p>high){
             high=p; }
        else{
            h=h-(high-p);
            high=p;
            if(h==0){
                printf("No");
                return 0;}
            else {
            if(h==0){
            printf("yes");
            return 0;}
            else{} } } }
    return 0; }