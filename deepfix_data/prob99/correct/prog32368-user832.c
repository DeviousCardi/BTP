#include<stdio.h>
int main() {
    int n,maxim=1;
    scanf("%d\n",&n);
    int a[n],max[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",a+i);
        max[i]=1; }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[j]>a[i]) {
                max[i]++; } } }
    for(int i=0;i<n;i++) {
        if(max[i]>maxim) {
            maxim=max[i]; } }
    printf("%d",maxim);
    return 0; }