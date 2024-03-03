#include <stdio.h>
int mul(int[],int start);
int main() {
    int i,N,arr[1000000000];
    scanf("%d\n",&N);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]); }
    arr[N]=0;
    printf("%d",mul(arr,N)); }
int mul(int t[],int start){
    int ans;
    if(t[start]==0)
    return ans;
    ans=t[start]*mul(t[],start+1); }