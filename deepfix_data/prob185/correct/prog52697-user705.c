#include <stdio.h>
int check(int ar[],int n,int sum){
    if(n==0&&sum!=0){
        return 0; }
    if(sum==0){
        return 1; }
    else {
        return check(ar,n-1,sum-ar[n-1])||check(ar,n-1,sum); } }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    if(check(a,n,s)){
        printf("YES"); }
    else printf("NO");
    return 0; }