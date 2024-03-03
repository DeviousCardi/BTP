#include <stdio.h>
int main() {
    int n,max,min,x=0,y=0;
    scanf("%d",&n);
    int a[n];
        for(int i=0;i<=n-1;i++) {
            scanf("%d",&a[i]); }
    max=a[0];
        for(int j=1;j<=n-1;j++) {
            if(max<a[j]) {
                max=a[j];
                x=j; } }
    min=a[0];
        for(int k=0;k<=n-1;k++) {
            if(min>a[k]) {
                min=a[k];
                y=k; } }
    int temp;
    temp=a[y];
    a[y]=a[x];
    a[x]=temp;
        for(int i=0;i<=n-1;i++) {
            printf("%d ",a[i]); }
    printf("end");
    return 0; }