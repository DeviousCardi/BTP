#include <stdio.h>
int arr[100]={0};
int n,k;
int getmaxlessthan(int upperlimit) {
    int i,b[100]={0};
    for(i=0;i<n;i++) {
        if((upperlimit-arr[i])>0)
            b[i]=upperlimit-arr[i];
            printf("%d ",b[i]); } }
int main() {
    int i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    getmaxlessthan(11);
    return 0; }