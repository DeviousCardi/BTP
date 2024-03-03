#include <stdio.h>
int main(){
    int i;int x;int n;
    scanf("%d",n);
    int a[n];int b[n];int c[n];
    for(i=0;i<n;i++){
        scanf("%d",&x);
        a[i]=x; }
    for(i=0;i<n;i++){
        scanf("%d",&x);
        b[i]=x; }
    for(i=0;i<n;i++){
        c[i]=a[b[i]]; }
    for(i=0;i<n;i++){
        a[i]=c[i]; }
    for(i=0;i<n;i++){
        printf("%d",a[i]); }
    printf("end");
    return 0; }