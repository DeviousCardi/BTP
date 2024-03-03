#include<stdio.h>
int main() {
    int n,maxii,maxim=1;
    scanf("%d\n",&n);
    int a[n],max[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",a+i);
        max[i]=1; }
    for(int i=0;i<n;i++) {
        maxii=a[i];
        for(int j=0;j<n;j++) {
            if(a[j]>maxii) {
                maxii=a[j];
                max[i]++; } }
        if(max[i]>maxim) {
            maxim=max[i]; } }
    printf("%d",maxim);
    return 0; }