#include <stdio.h>
int main() {
    int i,n,a[999999],temp;
    char b[999999];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d %c",&a[i],&b[i]); }
     for(i=0;i<n;i++) {
        printf("%d",a[i]); }
    printf("\n");
    for(i=0;i<n;i++) {
        if(a[i]>a[i+1])
       { temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;} }
       for(i=0;i<n;i++) {
        printf("%d",a[i]); }
    return 0; }