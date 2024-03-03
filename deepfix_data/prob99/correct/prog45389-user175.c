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
        for(i=0;i<n;i++) {
           if(i==0)
           b[0]=1;
           else {
               u=max(a,i,a[i]);
               for(j=0;j<i;j++) {
                   if(a[j]==u)
                   b[i]=b[j]+1; } } }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
return 0; }