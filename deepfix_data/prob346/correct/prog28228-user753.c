#include <stdio.h>
int main(){
    int n,j,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<=n-1;j++) {
        for(k=1;k<=n-1;k++) {
            if(a[k]<a[k-1]) {
                int temp;
                temp=a[k];
                a[k]=a[k-1];
                a[k-1]=temp; } } }
    for(int i=0;i<=n-1;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }