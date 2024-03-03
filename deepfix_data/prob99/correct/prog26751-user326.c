#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int m[n];
    for(int i=0;i<n;i++)
        m[i]=0;
    for(int q=0;q<n;q++) {
      for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            if(arr[i]>arr[j]) {
                i=j;
                m[q]++; }
            else if(j==n-1) {
                q++;
                break; }
            else
            j++; } } }
    return 0; }