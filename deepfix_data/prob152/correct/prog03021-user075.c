#include <stdio.h>
int main() {
    int arr[100001],a[100001],n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
    sum+=arr[i]; }
    a[0]=arr[0];
    if(sum%2) {
        printf("NO"); }
    else {
        sum/=2;
       for(int i=1;i<n;i++)
       {   int temp=a[i-1];
           for(int j=0;j<i;j++) {
              if(a[j]+arr[i]>temp&&a[j]+arr[i]<=sum) {
                  temp=a[j]+arr[i]; } }
           a[i]=temp; }
       if(a[n-1]=sum) {
           printf("YES"); }
       else {
           printf("NO"); } }
    return 0; }