#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,h,temp=0,min=INT_MIN;
    scanf("%d %d",&n,&m);
    int a[m];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&h);
            if(h>min)
            min=h; }
        a[i]=min;
        min=INT_MIN; }
    for(i=0;i<m-1;i++) {
        for(j=i;j<m;j++) {
            if(a[i]>a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    printf("%d",a[0]);
    return 0; }