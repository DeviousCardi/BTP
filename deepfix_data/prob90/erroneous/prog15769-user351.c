#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int n;
    scanf("%d",&n);
    int arr[500];
    int f=0;
    for(int i=o;i<500;i++) {
        arr[i]=0; }
    for(int i=0;i<n;i++) {
        int t;
        scanf("%d",&t);
        int arr[t-1]++; }
    for(int i=0;i<k/2;i++) {
        if(arr[i]>0&&arr[k-i]>0) {
            flag=1;break; } }
    if(flag)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }