#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],max=0,k=0;
    for(i=0;i<n;i++) {
        sm=a[i];
        for(j=i;j<n;j++) {
            if(a[j]>sm) {
                sm=a[j];
                k++; }
            if(k>max)
            max=k;
            k=0; } }
    return 0; }