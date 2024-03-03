#include <stdio.h>
int main() {
    int h,p,i,d,m,ht;
    scanf("%d%d",&h,&p);
    d=0;
    for(i=0;i<p;i++){
        scanf("%d",&ht);
        m=ht;
        if(m>ht){
            d=d+m-ht; } }
    if(d>=ht)
        printf("No");
    else
        printf("Yes");
    return 0; }