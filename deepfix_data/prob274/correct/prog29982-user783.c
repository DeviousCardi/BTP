#include <stdio.h>
int main() {
    int i,n,a[200],count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]);
        printf("%d ",a[i]); }
    for(i=1;i<=n;i++) {
        printf("%d",a[i]);
        i=a[i]-1;
        if(a[i]==a[1])
        count=count+1;
        if(count==3)
        break; }
        return 0; }