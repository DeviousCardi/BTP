#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int num[2*n];
    int i;
    for(i=0;i<2*n;i=i+1) {
        scanf("%d",&num[i]); }
    int j,n1[n];
    for(j=0;j<n-1;j=j+1) {
        int count=0;
        for(i=1;i<2*n;i=i+1) {
            if(num[j]==num[i]) {
                count=count+i-j;
                n1[j]=count; } } }
    int min=n1[0];
    for(j=0;j<n;j=j+1) {
        if(n1[j]>n1[j+1]) {
            min=n1[j+1]; } }
    printf("%d",min);
    return 0; }