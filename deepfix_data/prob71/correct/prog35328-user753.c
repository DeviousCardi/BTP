#include <stdio.h>
void sort(int n,int ar[]) {
    int i,j,temp;
    for(i=0;i<=n-2;i++) {
    for(j=0;j<=n-2;j++) {
     if(ar[j+1]<ar[j]) {
         temp=ar[j+1];
         ar[j+1]=ar[j];
         ar[j]=temp; } } } }
int main() {
    int median,i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<=n-1;i++)
    scanf("%d",&ar[i]);
    sort(n,ar);
    if(n%2==0)
    median=(ar[(n/2)-1]+ar[n/2])/2;
    else
    median=ar[(n-1)/2];
    printf("%d",median);
    return 0; }