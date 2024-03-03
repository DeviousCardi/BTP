#include <stdio.h>
int main()
{   int h,p,k1,k2,i=0,f=1;
    scanf("%d\n%d\n%d",&h,&p,&k1);
    while(i<p){
        scanf("%d",&k2);
        if(k2<k1){
            h=h-(k1-k2); }
        if(h<=0){
            f=0;
            break; }
        k1=k2;
        i++; }
    if(f==0){
        printf("No"); }
    if(i==p){
        printf("Yes"); }
    return 0; }