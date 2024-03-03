#include <stdio.h>
int main(){
    int i;
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    scanf("\n");
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    int c[n];
    for(i=0;i<n;i++){
        c[i]=a[b[i]];
        printf("%d",c[i]); }
    printf("end");
    return 0; }