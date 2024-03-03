#include <stdio.h>
void ssort(int ar[],int n);
void swap(int ar[],int m,int n);
int main() {
    int n,k,c[100000];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&c[i]); }
    ssort(c,n);
    printf("%d",c[n-k]);
    return 0; }
void ssort(int ar[],int n) {
    printf("%d ",ar[n]);
    if(n<=1) {
        return; }
    int max=ar[0],maxi=0;
    for(int i=0;i<n;i++) {
        if(ar[i]>max) {
            max=ar[i];
            maxi=i; } }
    swap(ar,maxi,n);
    ssort(ar,n-1); }
void swap(int ar[],int m,int n) {
    int tmp=ar[m];
    ar[m]=ar[n];
    ar[n]=tmp; }