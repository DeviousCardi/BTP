#include <stdio.h>
int main() {
    int h,p,i,b,temp;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&b);
    for(i=0;i<p-1;i++) {
            scanf("%d",&temp);
            if((temp-b)<=0) {
                    h=h+temp-b;
                    b=temp;
                    continue; }
            else {
                    b=temp;
                    continue; } }
    if(h<=0)
    printf("NO");
    else {
        printf("YES"); }
    return 0; }