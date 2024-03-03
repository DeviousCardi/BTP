#include <stdio.h>
int main() {
    int n,i,j,k,m,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        for(k=0;k<n-1;k++){
            if(a[k]>a[k+1])(
            temp=a[k+1];
            a[k+1]=a[k];
            a[k]=temp; ) } }
    return 0; }