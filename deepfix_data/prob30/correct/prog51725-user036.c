#include <stdio.h>
int n,l;
int arr[100]={0};
int getMaxLessThan(int upperLimit) {
    int m=arr[0];
    for(int j=1;j<upperLimit;j++){
        if(arr[j]>m){
            m=arr[j];
            l=j; }
        else
            m=arr[j-1]; }
    return m; }
int main() {
    int k;
    scanf("%d %d\n",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int x[k];
    for(int s=0;s<k;s++){
        x[s]=getMaxLessThan(n-s);
        printf("%d\n",x[s]); }
    return 0; }