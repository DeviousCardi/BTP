#include<stdio.h>
int getInversions(int g,int k);
int arr[100];
int getInversions(int l,int r) {
    int c=0;
    for(int i=l;i<r-1;i++) {
        for(int j=i+1;j<r;j++) {
            if(arr[i]>arr[j])
            c++; } }
    return c; }
int main() {
    int n,m,temp=0,max=0,i;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<(n-m+1);i++) {
        temp=getInversions(i,(i+m-1));
        printf("%d",temp);
        if(temp>max)
        max=temp; }
    printf("%d",max);
    return 0; }