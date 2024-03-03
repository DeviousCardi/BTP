#include <stdio.h>
int main() {
    int p,h,hp,i;
    scanf("%d %d",&h,&p);
    for(i=0;i<p;i++)
    scanf("%d",&hp);
     int temp=hp;
    for(i=0;i<p;i++) {
         if(temp<hp)
         temp=hp;
         printf("%d ",temp);
         scanf("%d",hp); }
    return 0; }