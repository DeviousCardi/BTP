#include <stdio.h>
int main() {
    int h,p,i;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    int a[p];
    for(i=0;i<p;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<p;) {
        if(a[i+1]<a[i])
            h-=(a[i]-a[i+1]);
        if(h<0)
            break;
        i++; }
    if(i==p)
        printf("Yes");
    else
        printf("No");
    return 0; }