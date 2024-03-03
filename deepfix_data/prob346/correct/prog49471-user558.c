#include<stdio.h>
int main() {
    int n,a[10000],i,j,t;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    scanf("%d",&a[j]);
    for(j=0;j<n;j++) {
        for(i=0;i<n;i++) {
            if(a[i]>a[j]) {
                t=a[j];
                a[j]=a[i];
                a[i]=t; } } }
    for(i=0;i<n;i++)
    printf("%d ",a[j]);
    printf("end"); }