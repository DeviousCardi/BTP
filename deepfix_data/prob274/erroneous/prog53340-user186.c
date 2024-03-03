#include <stdio.h>
int main() {
    int n,i,k=0,t=0,h=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        b[i]=0; }
    while(h!=4) {
        for(i=0;i<n;i++){
            if(b[i]==a[k])
            h=4 }
        b[i]=a[k];
        k=a[k];
        k=k-1;
        t=t+1; }
    printf("%d",t);
    return 0; }