#include <stdio.h>
int main() {
    int i,j,d=0,n,a[999999],temp,c=1,arr[9999],sum=0;
    char b[999999];
    arr[0]=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d %c",&a[i],&b[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
       { temp=a[i];
        a[i]=a[j];
        a[j]=temp;} }
     for(i=0;i<n;i++) {
        printf("%d",a[i]); }
    return 0; }