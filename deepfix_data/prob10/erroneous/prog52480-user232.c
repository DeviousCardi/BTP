#include<stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[n],max[20];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    l=0;
    for(j=0;j<n,j++) {
        max[0]=a[j];
        for(k=j+1;k<n;k++) {
           if(a[k]>max[l]) {
               l++;
               max[l]=a[k]; } } }
    printf("%d",l+1);
    return 0; }