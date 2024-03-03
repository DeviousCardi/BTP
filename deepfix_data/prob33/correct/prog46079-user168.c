#include <stdio.h>
int max(int n,int a,int b)
{int i;
    for(i=0;i<n;i++)
   { if(a>b)
    return a;
    else
    return b;} }
int main() {
    int p,h,hp,i,j;
    scanf("%d %d",&h,&p);
    for(i=0;i<p;i++)
    scanf("%d",&hp);
     int temp=0,d=0,term=0;
    for(i=0;i<p;i++) {
        scanf("%d",hp);
        d=hp-h;
    }if(d==0)
    printf("No");
    else
    printf("Yes");
    return 0; }