#include <stdio.h>
int main(){
    int n,f=0,t=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++) {
        scanf("%d",&b[i]); }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(b[i]>=b[j]) {
                f=b[i];
                b[i]=b[j];
                b[j]=f;
                t=a[i];
                a[i]=a[j];
                a[j]=t; } } }
    for(int i=0;i<n;i++) {
        printf("%d ",&a[i]); }
    printf("end");
    return 0; }