#include<stdio.h>
#include<limits.h>
int n,m;
int maximum(int a[],int s) {
    int i,max=INT_MIN;
    for(i=0;i<s;i++) {
        if(a[i]>max) {
            max=a[i]; } }
    return max; }
int minimum(int a[],int s) {
    int i,min=INT_MAX;
    for(i=0;i<s;i++) {
        if(a[i]<min) {
            min=a[i]; } }
    return min; }
int main() {
    int i,j;
    scanf("%d%d",&n,&m);
    int a[n],Max[m],Min;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[j]); }
        Max[i]=maximum(a,n); }
    Min=minimum(Max,m);
    printf("%d",Min);
    return 0; }