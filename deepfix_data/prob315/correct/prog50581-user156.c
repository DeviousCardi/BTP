#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,t;
    int sum=0;
    scanf("%d\n",&n);
    int a[n];
    int b[n];
    int count[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        b[i]=a[i]; }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                t=a[i];
                a[i]=a[j];
                a[j]=t; } } }
    for(i=0;i<n;i++)
    sum=sum+a[i];
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
	return 0; }