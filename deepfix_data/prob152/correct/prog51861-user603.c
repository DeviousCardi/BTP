#include <stdio.h>
int check(int n,int array[],int start,int compare) {
    int sum=0;
    for(int i=start+1;i<n;i++)
    sum+=array[i];
    if((sum==compare)&&start<=n-2) {
        printf("YES");
        return 0; }
    if(start==n-1) {
        printf("NO");
        return 0; }
    compare+=array[start+1];
    return check(n,array,start+1,compare); }
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    scanf("%d",&arr[i]);
    check(N,arr,0,arr[0]);
    return 0; }