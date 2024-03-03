#include <stdio.h>
int sum(int arr[],int s,int start,int end,int add) {
    static int add;
    if(start==end) {
        if(add==s) return 1;
        else return 0; }
    else return  sum(arr,s,start+1,end,add+arr[start]) || sum(arr,s,start+1,end,add); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int add=0;
    int a=sum(a,s,0,n-1,0);
    if(a==1) printf("YES");
    else printf("NO");
    return 0; }