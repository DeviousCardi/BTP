#include <stdio.h>
int main(){
    int i;int x;int n;
    scanf("%d",&n);
    int a[n];int b[n];int c[n];
    for(i=0;i<n;i++){
        scanf("%d",&x);
        a[i]=x; }
    for(i=0;i<n;i++){
        scanf("%d",&x);
        b[i]=x; }
    for(i=0;i<n;i++){
        c[b[i]]=a[i]; }
    for(i=0;i<n;i++){
        printf("%d ",c[i]); }
    printf("end");
    return 0; }