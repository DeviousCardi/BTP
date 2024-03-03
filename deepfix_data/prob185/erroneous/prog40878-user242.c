#include <stdio.h>
int sum(int arr[],int num,int s);
int diffsearch(int ar[],int st,int num1,int S);
int main() {
    int i,n,s;
    scanf("%d %d\n",&n,&s);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    int x=sum(a,n,s);
    if(x==1)
    printf("YES");
    else
    printf("NO");
    return 0; }
int sum(int arr[],int num,int s){
    if(num<0)
    return 0;
    if(num==0){
        if(arr[num]==s)
        return 1; }
    if(num>0){
        int t=diffsearch(arr,0,num-1,s-a[num-1]);
        if(t==0)
        return sum(arr,num-1,s);
        else
        return 1; } }
int diff.search(int ar[],int st,int N,int S){
    if(st>N)
    return 0;
    int mid=(st+N)/2;
    if(ar[mid]==S)
    return 1;
    return diff.search(ar,mid+1,N,S)||diff.search(ar,st,mid-1,S); }