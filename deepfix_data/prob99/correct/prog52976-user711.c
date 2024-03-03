#include<stdio.h>
int length_longest_subsequence(int a[],int n){
    int i,j,maxcount=0,count,x;
    if(n==1){
        return 1; }
    for(i=0;i<n-1;i++){
        x=a[i];
        count=1;
        for(j=i+1;j<n;j++){
            if(a[j]>x){
                x=a[j];
                count+=1; } }
        if(count>maxcount){
            maxcount=count; } }
    if(count==0){
        return count; }
    else{
        return maxcount; } }
int main() {
    int a[100],n,i,maximum;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    maximum=length_longest_subsequence(a,n);
    printf("%d",maximum);
    return 0; }