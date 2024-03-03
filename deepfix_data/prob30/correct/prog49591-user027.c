#include <stdio.h>
int arr[100];
int n;
int ab;
int getMaxLessThan(int a,int b) {
    if(a>b) {
            return a; }
    else {
            return b; } }
int main() {
    int k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<=n;i=i+1) {
    scanf("%d",&arr[i]); }
    while(n<=100)
    {   scanf("%d%d",&n,&k);
        for(int j=0;j<=n;j=j+1) {
                    scanf("%d",&arr[j]);
            ab=getMaxLessThan(arr[j],arr[j+1]); }
        printf("%d\n",ab); }
    return 0; }