#include<stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int i,j=0;
    int num[n];
    for(i=0;i<n;i=i+1) {
        scanf("%d",&num[i]); }
    int count=1;
    int max[n];
    int k;
    for(k=0;k<n-1;k=k+1) {
        for(i=0;i<n-1;i=i+1) {
            if(num[i+1]>num[k]) {
                count=count+1;
            }else {
                max[j]=count;
                j++;
                continue; } } }
    int m=max[0];
    for(j=0;j<n;j=j+1) {
        if(max[j+1]>max[j]) {
            m=max[j+1]; } }
    printf("%d",m);
    return 0; }