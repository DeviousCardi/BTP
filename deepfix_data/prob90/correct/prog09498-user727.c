#include <stdio.h>
int main() {
    int k,n,i,a[1000],b[500],c=0,j,luck=0;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]+a[j]==k)
            luck=1; }
        if(luck==1)
        break; }
    if(k%2==0)
    return 0;
    if(luck==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }