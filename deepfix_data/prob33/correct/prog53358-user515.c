#include <stdio.h>
int main() {
    int h,p,a[p],i;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    for(i=0;i<p;i++) {
        scanf("%d ",a[i]); }
    for(i=0;i<p;) {
        if(a[i+1]<a[i])
            h-=(a[i]-a[i+1]);
        if(h<0)
            break;
        i++; }
    if(i==(p-1))
        printf("Yes");
    else
        printf("No");
    return 0; }