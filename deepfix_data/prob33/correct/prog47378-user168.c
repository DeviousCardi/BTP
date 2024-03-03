#include <stdio.h>
int main() {
    int p,h,hp,i;
    scanf("%d %d",&h,&p);
    for(i=0;i<p;i++)
    scanf("%d",&hp);
     int temp=0;
    for(i=0;i<p;i++) {
         scanf("%d",&hp);
         if(temp<hp)
         temp=hp;
         printf("%d",temp); }
    return 0; }