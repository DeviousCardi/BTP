#include <stdio.h>
int main(){
    int n,i,j,t,k;
    scanf("%d",&n);
    int arr[n],seq[n+1];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    j=1;
    seq[0]=1;
    for(i=0;i<n;i++) {
        seq[i+1]=arr[j-1];
        j=arr[i]; }
    for(i=0;i<n+1;i++) {
        printf("%d",seq[i]); }
    return 0; }