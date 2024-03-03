#include <stdio.h>
int main() {
    int n,temp,count=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    b[i]=a[i];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                count++; } } }
    printf("%d\n",count);
    for(int i=0;i<n;i++) {
        count=0;
        for(int j=i+1;j<n;j++) {
            if(b[i]>b[j])
            count++; }
        printf("%d ",count); }
    return 0; }