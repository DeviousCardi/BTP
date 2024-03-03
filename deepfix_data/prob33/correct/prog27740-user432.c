#include <stdio.h>
int main() {
    int h,p,i=0,temp,prev=0;
    scanf("%d%d",&h,&p);
    while(i<p) {
        scanf("%d",&temp);
        if(temp<prev)
            h=h-(prev-temp);
        prev=temp;
        i++; }
    if(h>0)
        printf("Yes");
    else
        printf("No");
    return 0; }