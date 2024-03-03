#include<stdio.h>
int len_ascend_seq(int a,int a[],int n) { }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int ab;
    for(int i=0;i<n;i=i+1) {
        scanf("%d",&ab);
        ab=a[i]; }
    int max[n];
    for(int i=0;i<n;i=i+1) {
        max[i]=
        for(int j=i;j<n-1;j=j+1) {
            if(a[j]<a[j+1]) { } } }
    int m=0;
    for(int i=0;i<n-1;i=i+1) {
        if(max[i]>max[i+1]) {
            max[i+1]=max[i]; }
         m=max[i+1]; }
    printf("%d",m);
    return 0; }