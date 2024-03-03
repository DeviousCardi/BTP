#include <stdio.h>
int main(){
    int n,i,j,t,k,l;
    scanf("%d",&n);
    int arr[n],seq[n+1];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    j=0;
    seq[0]=1;
    for(i=1;i<n+1;i++) {
        seq[i]=arr[j];
        j=arr[i-1]-1;
        for(l=0;l<i;l++) {
            if(seq[i]==seq[l]) {
                t=i;
                k=i-l;
                printf("%d %d",t,k);
                return 0; } } }
    return 0; }