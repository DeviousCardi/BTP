#include <stdio.h>
int arr[100]={0};
int n;
int ab;
int getMaxLessThan(int a,int b) {
    if(a>b) {
            return a; }
    else {
            return b; } }
int main() {
    int i=0;
    int k;
    scanf("%d%d",&n,&k);
    scanf("%s",arr[i]);
    while(k<=n,n<=100)
    {   scanf("%d%d",&n,&k);
        for(int j=0;j<=n;j=j+1) {
            int a;
            a=getMaxLessThan(arr[j],arr[i+1]); }
        printf("%d",a); }
    return 0; }