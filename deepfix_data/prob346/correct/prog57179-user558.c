#include<stdio.h>
int main() {
    int n,a[n],i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[j]>a[i]) {
                t=a[i];
                a[i]=a[j];
                a[j]=t; } } }
    for(i=0;i<n;i++)
    printf("\n %d",a[i]);
    printf("end"); }