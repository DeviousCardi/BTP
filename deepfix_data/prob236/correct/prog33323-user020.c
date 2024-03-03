#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n&&i<=100;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n&&i<=100;i++) {
        scanf("%d",&b[i]); }
    for(int i=0;i<n&&i<=100;i++) {
        for(int j=0;j<n&&j<=100;j++) {
        if (i==b[j])
        printf("%d ",a[j]); } }
    printf("end");
    return 0; }