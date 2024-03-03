#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,i,j,count=0;
    char u;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=;i<n;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%c",&u);
    for(i=0;i<n;i++) {
    for(j=i+1;j<n;j++) {
        if(a[i]>a[j])
            b[i] = b[i]+1; } }
    for(i=0;i<n;i++)
    count=count+b[i];
    printf("%d\n",count);
    for(i=0;i<n;i++) {
    printf("%d",b[i]);
    if(i!=n-2)
    printf(" "); }
    return 0; }