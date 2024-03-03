#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,a[1000],b[100],n,k=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]>a[j]&&i<j) {
              k++;
              c++; }
            b[i]=c;
            c=0; } }
    printf("%d\n",k);
    for(i=0;i<n;i++)
    printf("%d ",b[i]); }