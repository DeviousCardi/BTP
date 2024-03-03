#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int maxi=0,mini=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[maxi])
            maxi=i;
        else if(a[i]<a[mini])
            mini=i; }
    a[maxi]=a[maxi]+a[mini];
    a[mini]=a[maxi]-a[mini];
    a[maxi]=a[maxi]-a[mini];
    for(int i=0;i<n;i++){
        printf("%d ",a[i]); }
    printf("end");
    return 0; }