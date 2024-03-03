#include <stdio.h>
int main(){
    int k,n,a[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=1;j<n;j++) {
            if(a[i]+a[j]==k)
            printf("lucky");
            else
            printf("unlucky");
            break; } }
    return 0; }