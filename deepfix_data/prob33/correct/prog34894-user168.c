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
     int temp=0,d=0,term=0;
    for(i=0;i<p;i++) {
        term=max(hp,temp);
        printf("%d",max);
        scanf("%d",hp);
    }if(d==0)
    printf("No");
    else
    printf("Yes");
    return 0; }