#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int n;
    scanf("%d",&n);
    int arr[501];
    int f=0;
    if((k>1000) && (k<0) && (k%2==0) && (k==0) ) {
        printf("unlucky");
        return 0; }
    for(int i=0;i<500;i++) {
        arr[i]=0; }
    for(int i=0;i<n;i++) {
        int t;
        scanf("%d",&t);
        arr[t]++; }
    for(int i=0;i<k/2;i++) {
        if(arr[i]>0&&arr[k-i]>0) {
            f=1;break; } }
    if(f)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }