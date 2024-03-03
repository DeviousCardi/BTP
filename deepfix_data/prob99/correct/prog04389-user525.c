#include<stdio.h>
    int a[1000];
    int max(int n) {
        int m=1;
        for(int i=0;i<n;i++) {
            int count=1;
            for(int j=i+1;j<n;j++) {
                if(a[i]<a[j]) {
                 count++;
                if(count>=m)
                m=count; } } }
        return m; }
    int main() {
    int n;
    int a[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int l=max(n);
    printf("%d",l);
    return 0; }