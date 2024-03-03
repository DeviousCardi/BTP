#include <stdio.h>
int main(){
    int a[100],b[100],c[100],n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++) {
        c[(b[i])]=a[i]; }
    for(i=0;i<n;i++) {
        printf("%d ",c[i]); }
    printf("end");
    return 0; }