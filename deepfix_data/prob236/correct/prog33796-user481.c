#include <stdio.h>
int main() {
    int n,a[n],i,j,x,d[n];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&d[i]);
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(d[i]>d[j]) {
                x=a[i];
                a[i]=a[j];
                a[j]=x; } } }
        printf("end");
    return 0; }