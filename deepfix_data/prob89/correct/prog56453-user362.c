#include <stdio.h>
int main() {
    int i,x,n,j,flag,a[100];
    scanf("%d\n",&x);
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d ",a[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]+a[j]==x) {
                    printf("lucky");
                    flag=1;
                    break; } }
        if(flag==1) {
            break; } }
    if(i==n) {
        printf("unlucky"); }
    return 0; }