#include <stdio.h>
int main() {
    int h,p;
    scanf("%d%d",&h,&p);
    int i=0;
    int h1=0,h2;
    for(;i<p;i++){
        scanf("%d",&h2);
        if(h1>h2)
            h=h-(h1-h2);
        h1=h2; }
    if(h>0)
        printf("Yes");
    else
        printf("No");
    return 0; }