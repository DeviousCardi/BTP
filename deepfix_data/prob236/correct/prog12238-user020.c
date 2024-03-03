#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n&&i<=100;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n&&i<=100;i++) {
        scanf("%d",&b[i]); }
    for(int i=0;i<n&&i<=100;i++) {
        for(int j=b[i];j<n&&j<=100;j++) {
            printf("%d ",a[j]);
            break; } }
    printf("end");
    return 0; }