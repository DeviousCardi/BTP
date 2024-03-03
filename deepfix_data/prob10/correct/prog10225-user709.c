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
         b[i]=count;
         max=b[0];
         if(max<b[i])
         max=b[i]; }
    printf("%d",max);
    return 0; }