#include <stdio.h>
int main() {
    int n,count;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int m=0;
    while(m<n) {
        int j=0;
        while(j<n) {
            if(a[j]<a[j+1]) {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t; }
            j++; }
        m++; }
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }