#include <stdio.h>
int main(){
    int h,p,i,sum=0;
    scanf("%d%d",&h,&p);
    int hgt,prev;scanf("%d",&prev);
    for(i=1;i<p;i++){
                    scanf("%d",&hgt);
                    if(prev>hgt){
                                x=(prev-hgt);
                                sum=sum+x;
                                prev=hgt;
                    else{
                        prev=hgt;
                        continue; } }
    if(h>sum){
                printf("Yes"); }
    else{
        printf("No"); }
    return 0; }