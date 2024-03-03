#include <stdio.h>
int main(){
    int i;
    int n;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<=100;i++){
        scanf("%d",&a[i]); }
    int b[100];
    for(i=0;i<=100;i++){
        scanf("%d",&b[i]); }
    int c[100];
    for(i=0;i<=100;i++){
        c[i]=a[b[i]];
        printf("%d",c[i]); }
    printf("end");
    return 0; }