#include <stdio.h>
int b[100000];
int sort(int a[],int n){
    if(n<0)return 0;
    else return sort(a,n-1); }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[100000];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    sort(a,n);
    int t=(n/2)+1;
    if((n%2)==0){
        printf("%f",(a[t]+a[t-1])/2); }
    else printf("%d",a[t]);
    return 0; }