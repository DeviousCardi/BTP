#include <stdio.h>
int main() {
    int a[10000],i,j,k,b[10000]={0},n,l,m,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d,",&a[i]); }
    for(j=0;j<n;j++){
        k=a[j];
        b[k-1]++; }
    for(m=0;m<n;m++){
        if(b[m]==m+1 || b[m]==0){
            count++; } }
    if(count==n ){
        printf("Yes"); }
    else{
        printf("No"); }
    return 0; }