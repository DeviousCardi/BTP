#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int n;
    scanf("%d",&n);
    int arr[1002];
    int f=0;
    for(int i=0;i<1001;i++) {
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