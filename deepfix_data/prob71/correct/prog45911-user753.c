#include <stdio.h>
void sort(int n,int ar[]) {
    int i,j,temp;
    for(i=0;i<=n-2;i++) {
    for(j=i;j<=n-2;j++) {
     if(ar[j+1]<ar[j]) {
         temp=ar[j+1];
         ar[j+1]=ar[j];
         ar[j]=temp; } } } }
int main() {
    int med,i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<=n-1;i++)
    scanf("%d",&ar[i]);
    sort(n,ar);
     for(i=0;i<=n-1;i++)
    printf("%d\n",ar[i]);
    return 0; }