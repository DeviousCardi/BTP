#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,a[1000],b[100],n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]>a[j]&&i<j) {
              k++; } } }
    printf("%d",k); }