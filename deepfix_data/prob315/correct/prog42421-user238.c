#include <stdio.h>
int main() {
    int n,temp,count=0;
    scanf("%d\n",&n);
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
    for(int i=0;i<n;i++)
    printf("%d",a[i]);
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