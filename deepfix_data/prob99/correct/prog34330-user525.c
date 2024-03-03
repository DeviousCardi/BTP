#include<stdio.h>
    int main() {
    int n;
    int m=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;) {
            int count=1;
            for(int j=i+1;j<n;j++) {
                if(a[i]<a[j]) {
                 count++;
                if(count>=m)
                m=count;
                i=j; } } }
    printf("%d",m);
    return 0; }