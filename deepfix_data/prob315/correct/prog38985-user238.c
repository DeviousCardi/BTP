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
            if(a[i]>a[i+1]) {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                count++; } } }
    printf("%d\n",count);
    for(int i=0;i<n;i++) {
        int j;
        for(j=i;j<n;j++) {
            if(a[i]==b[j]) {
                printf("%d ",j-i);
                break; } }
        if(j==n)
        printf("%d ",0); }
    return 0; }