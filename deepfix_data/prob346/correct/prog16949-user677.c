#include <stdio.h>
int main(){
    int a[10000],l,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        l=a[i];
        for(j=i+1;j<n;j++) {
            if(l>=a[j]) {
                a[i]=a[j];
                a[j]=l; } } }
    for(i=0;i<n;i++) {
        printf("%d",a[i]); }
    printf("end");
    return 0; }