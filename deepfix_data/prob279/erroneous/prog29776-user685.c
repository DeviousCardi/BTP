#include <stdio.h>
int main() {
    int a[1000],i,j,k,l,n,m,b[1000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(m=0;m<n;m++){
        k=a[m];
        b[k-1]++; }
    for(j=0;j<n;j++){
        if(b[j]==0)
        printf("%d\n",j+1); }
    for(l=0;l<n;++){
        if(b[l]==2)
        printf("%d",l+1); }
    return 0; }