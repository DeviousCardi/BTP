#include <stdio.h>
int main() {
    int h,p,i,d,m,ht;
    scanf("%d%d",&h,&p);
    scanf("%d",&ht);
    m=ht;
    d=0;
    for(i=1;i<p-3;i++){
        scanf("%d",&ht);
        if(m>ht){
            d=d+m-ht; }
        m=ht; }
    if(d>=ht)
        printf("No");
    else
        printf("Yes");
    return 0; }