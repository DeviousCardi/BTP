#include <stdio.h>
int main() {
    int n,i,j,b;
    float med;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++) {
            scanf ("%d",&a[i]); }
    for (i=0; i<n; i++) {
         for (j=i+1; j<n; j++) {
                if (a[i]>a[j]) {
                       b=a[i];
                       a[i]=a[j];
                       a[j]=b; } } }
    for (i=0; i<n; i++){
        printf("%d ",a[i]); }
     if (n%2!=0) {
                   med=a[(n+1)/2];
                   printf("%d",a[(n+1)/2]); }
    else if(n%2==0) {
                   med=(a[n/2]+a[(n/2)-1])/2.0;
                   printf("%.1f",med); }
    return 0; }