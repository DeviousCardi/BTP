#include <stdio.h>
int sum(int a[],int start,int end,int k){
    if(k==0){
        return 1; }
    else if((start==end)&&(k!=0)){
        return 0; }
    else{
        return sum(a,start+1,end,k-a[start])||sum(a,start+1,end,k); } }
int main() {
    int n,s=0,a[30];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s=s+a[i]; }
    if(s%2==0){
        if(sum(a,0,n-1,s/2)){
            printf("YES"); } }
    else
    printf("NO");
    return 0; }