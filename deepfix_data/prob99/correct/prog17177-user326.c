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
        for(int j=i;j<n;) {
            if(arr[i]>arr[j]) {
                i=j;
                j++;
                m[q]++; }
            else {
            j++; }
            if(j==n-1) {
                i++;
                q++;
                break; } } } }
    int max=m[0];
    for(int i=0;i<n;i++) {
        if(m[i]>max)
        max=m[i]; }
    printf("%d",max);
    return 0; }