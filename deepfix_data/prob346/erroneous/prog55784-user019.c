#include <stdio.h>
int main(){
    int n,i,j,t;
    int a[10001];
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<n;i++) {
        for(j=1;j<=(n-i);j++) {
            if(a[j]>a[j+1]) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t; } } }
    for(i=1;i<=n;i++) {
    printf("%d ",a[i]) }
    printf("end");
    return 0; }