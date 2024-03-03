#include <stdio.h>
int main() {
    int n,temp,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(a[i]>a[i+1]) {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                count++; } } } }