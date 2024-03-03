#include <stdio.h>
int b[100000];
sort(int a[],int n){
    int i,k;
    k=a[n-1];
    for(i=0;i<n;i++){
            if(a[i]>k)k=a[i]; }
    b[n]=k; }
    if(n<0)return;
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