#include <stdio.h>
void swap(int a[],int x,int y) {
    int temp;
    temp=a[x];
    a[x]=a[y];
    a[y]=temp; }
int sum2(int a[],int n) {
    if(n==1)
    return a[0];
    return a[n-1]+sum2(a,n-1); }
void recurse(int a[],int start,int n,int sum) {
    if(n==1) {
        printf("NO");
        return ; }
    if(sum==a[start]) {
        printf("YES");
        return ; }
    sum=sum-a[start];
    for(int i=2;i<n;i++) {
        recurse(a,start+1,n-1,sum);
        swap(a,start+1,start+i); } }
int main() {
    int  sum=0;
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sum=sum2(a,n)/2;
    for(i=1;i<n;i++) {
        recurse(a,0,n,sum);
        swap(a,0,i); }
    return 0; }