#include <stdio.h>
int main() {
    int h,n,i,d=0;
    scanf("%d",&h);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        if((p>=2&&p<=100)
    for(i=0;i<n-1;i++) {
        if((a[i]-a[i+1])>0)
            d=d+a[i]-a[i+1]; }
    if(d>=h)
        printf("No");
    else
        printf("Yes");
    return 0; }