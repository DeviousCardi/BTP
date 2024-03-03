#include <stdio.h>
int main() {
    int n,i,k,j,m;
    m=400;
    scanf("%d",&n);
    int arr[400];
    for(i=0;i<2*n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if (arr[i]==arr[j])
            k=j-i;
            if(m>k)
            m=k; } }
    printf("%d",m);
    return 0; }