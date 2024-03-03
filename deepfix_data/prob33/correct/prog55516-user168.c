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
     int temp=0,d=0;
    for(i=0;i<p;i++) {
         if(temp<hp)
         temp=hp;
          scanf("%d",&hp);
          d=temp-hp;
    }if(d<0 || d-h==0)
    printf("N0");
    else
    printf("YES");
    return 0; }