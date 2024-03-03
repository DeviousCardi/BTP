#include <stdio.h>
int main(){
    int i,n,temp,h,h2,temp2;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        scanf("%d ",&b[i]); }
    for(i=0;i<n;i++) {
        h=b[i];
        temp=a[h];
        a[h]=a[i];
        a[i]=temp;
        temp=b[h];
        b[h]=b[i];
        b[i]=temp; }
     for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }