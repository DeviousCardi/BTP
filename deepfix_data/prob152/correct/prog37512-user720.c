#include<stdio.h>
int n,sum=0,check=0,a=0;
int split(int arr[],int k,int check) {
    for(int i=k;i<n;i++){
        check+=arr[i];
        if(check == sum/2){
            return 1;
        }else if(check < sum/2){
            a=split(arr,i+1,check);
            if(a==1) return 1; }
        check-=arr[i]; }
    return 0; }
int main() {
    int res=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i]; }
    res=split(arr,0,check);
    if(res) printf("YES");
    else printf("NO");
    return 0; }