#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n&&i<=100;i++) {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        printf("%d %d\n",a[i],b[i]) }
    for(int i=0;i<n&&i<=100;i++) {
        printf("%d ",a[b[i]]); }
    printf("end");
    return 0; }