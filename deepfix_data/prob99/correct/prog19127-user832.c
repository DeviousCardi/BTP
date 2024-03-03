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
            if(j==0) {
                if(array[j]==maximum(array+i,j-i+1))
                max[i]++; }
            else {
                if(array[j-1]!=array[j])
                if(array[j]==maximum(array+i,j-i+1))
                max[i]++; } }
        printf("%d\n",max[i]); }
    printf("\n%d",maximum(max,n));
    return 0; }
int maximum(int a[],int n) {
    int max=a[0];
    for(int i=0;i<n;i++) {
        if(max<a[i])
        max=a[i]; }
    return max; }