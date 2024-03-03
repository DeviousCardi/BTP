#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int d;
    scanf("%d",&d);
    int c=d%n;
    int q=arr[0];
    int l;
    for(int i=0;i<c;c++) {
        for(int k=1;k<n;) {
         l=arr[k];
         arr[k]=q;
         q=l;
         if((k+1)==n) {
             arr[0]=q; }
         k++; } }
    for(int i=0;i<n;i++) {
        printf("%d\n",arr[i]); }
    return 0; }