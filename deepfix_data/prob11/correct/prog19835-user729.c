#include <stdio.h>
int su(int n,int s,int num[n]) {
    int i,sum,k;
    sum=0;
    k=0;
    for(i=0; i<n; i++) {
        sum=sum+num[i];
        if(s==sum) {
            k=1;
            printf("YES"); }
        else {
            return su(n,s,num[n-1]); } }
    if(k==0) {
        return 0; } }
int main() {
    int N,S;
    scanf("%d",&N);
    scanf("%d",&S);
    int arr[N];
    int i;
    for(i=0; i<N; i++) {
        scanf("%d",&arr[i]); }
    int sum=su(N,S,arr);
    if(sum==1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }