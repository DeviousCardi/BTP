#include <stdio.h>
int main() {
    int h,p,i,d,m,ht;
    scanf("%d%d",&h,&p);
    scanf("%d",&ht);
    m=ht;
    d=0
    for(i=0;i<p;i++){
        scanf("%d",&ht);
        if(m>ht){
            d=d+m-ht;
            m=ht; } }
    if(d<ht)
        printf("Yes");
    else
        printf("No");
    return 0; }