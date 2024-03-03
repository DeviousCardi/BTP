#include <stdio.h>
int main(){
    int n, t;
    int a[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            if(a[j]<a[i]) {
                t=a[i];
                a[i]=a[j];
                a[j]=t; } } }
    for(int i=0; i<n;i++) {
     printf("%d",a[i]); }
    printf("end");
    return 0; }