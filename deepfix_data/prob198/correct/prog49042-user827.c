#include <stdio.h>
int main() {
    int n1,n2,a[n1],b[n2],i,j,s;
    scanf("%d",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    for(i=0;i<n2;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n1;i++) {
        for(j=0;j<i;j++) {
            if(a[i]<a[j]) {
                s=a[i];
                a[i]=a[j];
                a[j]=s; } } }
    for(i=0;i<n1;i++) {
        printf("%d ",a[i]); } }