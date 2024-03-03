#include<stdio.h>
int main() {
    int n,a[10000],i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;j<n;i++) {
        for(j=0;i<n;j++) {
            if(a[i]>a[j]) {
                t=a[j];
                a[j]=a[i];
                a[i]=t; } } }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("end"); }