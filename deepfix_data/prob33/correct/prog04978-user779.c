#include <stdio.h>
int main() {
    int h,n,high,p;
    scanf("%d%d",&h,&n);
    scanf("%d",&p);
    high=p;
    if(h!=0){
        while(h!=0){
        scanf("%d",&p);
        if(p>high){
            scanf("%d",&p); }
        else{
            h=high-p;
            scanf("%d",&p); } } }
    else
     printf("No");
    return 0; }