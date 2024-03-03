#include<stdio.h>
int length_longest_subsequence(int a[],int n){
    int i,j,k,maxcount=0,count,x;
    if(n==1){
        retun 1; }
    for(i=0;i<n-1;i++){
        for(k=i;k<n-1;k++){
            count=1;
            x=a[i];
            for(j=k+1;j<n;j++){
                if(a[j]>x){
                    x=a[j];
                    count+=1; } }
            if(count>maxcount){
                maxcount=count; } } }
    return maxcount; }
int main() {
    int a[10000],n,i,maximum;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    maximum=length_longest_subsequence(a,n);
    printf("%d",maximum);
    return 0; }