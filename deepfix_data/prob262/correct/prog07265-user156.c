#include<stdio.h>
#include<strings.h>
void rev(int ar[],int n) {
    if(n==1) {
     printf("%d ",ar[n]); }
    rev(ar,n-1);
    printf("%d ",ar[n-1]); }
int main() {
    int n;
    int i;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    rev(ar,n);
       return 0; }