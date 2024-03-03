#include <stdio.h>
int main() {
    int h,p,i,d,m,ht;
    scanf("%d%d\n",&h,&p);
    scanf("%d",&ht);
    d=0;
    for(i=1;i<p-1;i++){
        m=ht;
        scanf("%d",&ht);
        if(m>ht){
            d=d+m-ht; } }
    if(d>=ht)
        printf("No");
    else
        printf("Yes");
    return 0; }