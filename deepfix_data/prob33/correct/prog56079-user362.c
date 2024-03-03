#include <stdio.h>
int main() {
    int h,p,n,x,y,a,flag;
    scanf("%d\n",&h);
    scanf("%d\n",&n);
    int sum=0;
    for(p=2;p<n;p++) {
        scanf("%d",&x);
        scanf("%d",&y); }
    for(p=2;p<n;p++) {
        a=x-y;
        h=h-(x-y);
        if(h>0)
            flag=1;
        else
            flag=0; }
    if(flag==1)
    printf("yes");
    else
    printf("No");
    return 0; }