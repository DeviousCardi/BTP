#include<stdio.h>
#include<strings.h>
int n;
void rev(int ar[],int l) {
    if(l==n) {
     printf("%d ",ar[n-1]); }
    else {
    rev(ar,l+1);
    printf("%d ",ar[l]); } }
int main() {
    int i;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    rev(ar,0);
    return 0; }