#include<stdio.h>
int maximum(int a[],int n);
int main() {
    int n;
    scanf("%d\n",&n);
    int array[n],max[n];
    for(int i=0;i<n;i++) {
        scanf("%d",array+i);
        max[i]=0; }
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            printf("%d-%d ",maximum(array+i,j-i+1),array[j]);
            max[i]++; }
        printf("\n"); }
    for(int i=0;i<n;i++) {
        printf("\n%d ",max[i]); }
    return 0; }
int maximum(int a[],int n) {
    int max=a[0];
    for(int i=0;i<n;i++) {
        if(max<a[i])
        max=a[i]; }
    return max; }