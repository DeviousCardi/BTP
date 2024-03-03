#include<stdio.h>
int main() {
    int a[100],n,count=0,j,i,c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     for(i=0;i<n;i++) {
         for(j=i;j<n;j++) {
             if(a[j+1]>a[j])
             count=count+1; }
        c[i]=count;
        count=0; }
     int m=0;
     for(i=0;i<n;i++) {
         if(c[i]>=c[m])
         m=i; }
    printf("%d",c[m]);
    return 0; }