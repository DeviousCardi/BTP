#include <stdio.h>
int main() {
    int n,a[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    if(n%2==0) {
    float p=(a[0]+a[(n/2)])/(2.0);
    printf("%0.1f",p); }
    else {
        int q=((n+1)/2);
        printf("%d",q); }
    return 0; }