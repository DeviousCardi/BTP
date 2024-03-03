#include <stdio.h>
int arr[100]={0};
int n;
int max(int a,int b) {
    if(a>=b)
    {return a;}
    else
    {return b;} }
int getMaxLessThan(int upperLimit) {
    int maxi=0;
    for(int i=0;i<100;i++) {
        if(arr[i]<upperLimit) {
            maxi=max(arr[i],maxi); } }
    return maxi; }
int main() {
    int k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int l=100000;
    int result[k];
    for(int i=0;i<k;i++) {
        l=getMaxLessThan(l);
        result[i]=l; }
    for(int i=0;i<k;i++) {
        printf("%d\n",result[i]); }
    return 0; }