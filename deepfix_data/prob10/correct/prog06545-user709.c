#include<stdio.h>
int main() {
    int i,n,a[20],j,count,max,b[20];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        count=1;
        for(j=i;j<n;j++) {
            if(a[j]>a[i])
            count++; }
         b[i]=count; }
    max=b[0];
    for(i=1;i<n;i++) {
        if(max<a[i])
        a[i]=max; }
    printf("%d",max);
    return 0; }