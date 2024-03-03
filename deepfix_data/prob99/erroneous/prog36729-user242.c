#include<stdio.h>
void subseq(int t[],int r){
    int sum=0,flag=0,i;
    for(i=0;i<r;i++){
        if(sum<sum+t[i]){
            flag=flag+1; } }
    printf("%d",flag); }
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d ",&a[i]);
    subseq(a,n);
    return 0; }