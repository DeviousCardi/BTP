#include <stdio.h>
int main() {
    int i,n,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
      for(j=i+1;j<n;j++) {
          if(a[i]>a[j]) {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp; } } }
    if(n%2!=0) {
        printf("%d",a[(n-1)/2]); }
    else if(n%2==0) {
        printf("%.1f",(a[(n-2)/2]+a[n/2])/2); }
    return 0; }