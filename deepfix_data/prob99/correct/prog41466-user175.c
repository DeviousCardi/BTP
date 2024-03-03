#include<stdio.h>
int max(int a[],int n,int upper) {
    int i,m=0;
    for(i=0;i<n;i++) {
        if((a[i]>m)&&(a[i]<upper))
        m=a[i]; }
    return m; }
int main() {
    int n,i,j,u;
    int a[20],b[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        u=max(a,3,5);
        printf("%d",u);
return 0; }