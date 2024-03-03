#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b[n];
    for(int i=0;i<n;i++) {
        int count=0;
        int c=a[i];
        for(int j=i;j<n;j++) {
            if(c<a[j])
            count++; }
        b[i]=count; }
    int c=b[0];
    for(int i=0;i<n;i++) {
        if(c>=b[i])
        c=b[i]; }
    printf("%d",c); }