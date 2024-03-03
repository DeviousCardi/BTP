#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (i=0 ; i<n ; i++) {
        scanf("%d",&a[i]); }
   int k=0
    for (i=0 ; i<n-2 ; i++) {
        if ((a[i]<a[i+1]) && (a[i+1]>a[i+2]))
        k++; }
    return 0; }