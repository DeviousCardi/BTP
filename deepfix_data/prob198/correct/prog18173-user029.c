#include<stdio.h>
int main() {
    int n1,n2,a[100],b[100],c[100],t=0,max=0;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++) {
        scanf("%d",&b[i]); }
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            if(a[i]!=b[j]) {
                c[t]=a[i];
                t++; } } }
    for(int i=0;i<t;i++) {
        if(c[i]<max)
        max=c[i]; }
    printf("%d",max);
    return 0; }