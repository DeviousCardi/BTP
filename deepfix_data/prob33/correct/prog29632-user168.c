#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int p,h,hp,i;
    scanf("%d %d",&h,&p);
    for(i=0;i<p;i++)
    scanf("%d",&hp);
     int temp=0;
    for(i=0;i<p;i++) {
         scanf("%d",&hp);
         temp=max(temp,hp);
         printf("%d",temp); }
    return 0; }