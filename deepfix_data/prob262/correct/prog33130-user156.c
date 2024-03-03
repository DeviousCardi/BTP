#include<stdio.h>
#include<strings.h>
void rev(int ar[],int n) {
    if(n==0) {
     printf("%d ",ar[0]); }
    else {
    rev(ar,n-1);
    printf("%d ",ar[n]); } }
int main() {
    int n;
    int i;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    rev(ar,n);
    return 0; }