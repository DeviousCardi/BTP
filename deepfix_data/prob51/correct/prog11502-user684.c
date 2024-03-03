#include <stdio.h>
int main() {
    int n,k;
    scanf("%d %d\n",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d ",&a[i]);
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            if(a[j]>a[i]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    printf("%d",a[k-1]);
    return 0; }