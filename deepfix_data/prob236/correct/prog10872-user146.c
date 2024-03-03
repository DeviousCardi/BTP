#include <stdio.h>
int main(){
    int n,i;
    int b[100],a[100],c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        c[a[i]]=b[i]; }
       for(i=0;i<n;i++){
        printf("%d",c[i]); }
    printf("end");
    return 0; }