#include <stdio.h>
int main() {
    int h,n,high,p,count=0;
    scanf("%d%d",&h,&n);
    scanf("%d",&p);
    count=count+1;
    high=p;
        while(h!=0){
        scanf("%d",&p);
        count=count+1;
        if(p>high){
             high=p; }
        else{
            h=h-(high-p);
            high=p;
            if(h==0){
                printf("No");
                return 0;}
            else {
            if(count==n){
                printf("Yes"); }
            else{} } } }
    return 0; }