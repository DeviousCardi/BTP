#include <stdio.h>
int main() {
    int arr[15000];
    int k,n,i,j,flag,l;
    scanf("%d\n%d\n",&k,&n);
    flag=0;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(j=0;j<n;j++) {
        for(l=0;l<n;l++) {
            if(j!=l && arr[j]+arr[l]==k)
            flag=flag+1; } }
    if(flag>0)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }