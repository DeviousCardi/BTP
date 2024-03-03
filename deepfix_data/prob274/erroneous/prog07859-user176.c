#include <stdio.h>
int main(){
    int n;
    int a[n];
    a[0]=1;
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    m=a[1],c=0;
    for(i=1;i<=n;i++) {
        a[i]=a[a[i]];
        c=c+1;
        if(m=a[i]) {
            printf("%d",c)
            break; } }
    printf
    return 0; }