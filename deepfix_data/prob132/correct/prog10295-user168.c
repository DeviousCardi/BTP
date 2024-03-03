#include<stdio.h>
int main() {
    int i,j,a[1000],temp=0,c[1000],flag=0;
    int n,count1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d,",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[j]<a[i]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } }
    }for(i=0;i<n;i++) {
        c[a[i]]++;
        }for(i=0;i<n;i++)
        printf("%d",c[i]);
        for(i=a[0];i<=a[n-1];i++) {
            if(c[i]==i)
            flag=1;
            else
            flag=0; }
    return 0; }