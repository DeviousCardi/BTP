#include <stdio.h>
int main(){
    int i,n,temp,h;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        scanf("%d ",&b[i]); }
    for(i=0;i<n;i++) {
        h=b[i];
        temp=a[i];
        a[i]=a[h];
        a[h]=temp; }
     for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }