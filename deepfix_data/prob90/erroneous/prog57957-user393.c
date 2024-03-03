#include <stdio.h>
int main() {
    int arr[1000];
    int k,n,i,j,flag,l;
    scanf("%d\n%d\n",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(j=0;j<n;j++) {
        for(l=0;l<n;l++) {
            if(a[j]+a[l]==k)
            flag=flag+1; } }
    if(flag>0)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }