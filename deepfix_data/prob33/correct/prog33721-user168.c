#include <stdio.h>
int main() {
    int p,h,hp,temp=0,i;
    scanf("%d %d",&h,&p);
    scanf("%d",&hp);
    for(i=0;i<p;i++) {
         if(temp<hp)
         temp=hp;
         scanf("%d",hp);
         printf("%d",temp); }
    return 0; }