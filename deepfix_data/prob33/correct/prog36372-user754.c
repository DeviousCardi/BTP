#include <stdio.h>
int main() {
    int h,p,a,b,i;
    scanf("%d %d %d",&h,&p,&a);
    for(i=0;i<p-1;i++){
        scanf("%d",&b);
        if(b<a)
            h=h-(a-b);
        a=b; }
    if(h>0)
        printf("Yes");
    else
        printf("No");
    return 0; }