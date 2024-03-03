#include <stdio.h>
int min(int a,int b){
    if(b<a)
    return b;
    else
    return a; }
int main(){
    int n,i,j,minimum;
    scanf("%d",&n);
    int arr[2*n];
    int d[n];
    int min(int,int);
    for(i=0;i<2*n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        for(j=n;j<2*n;j++){
            if(arr[i]==arr[j])
                d[i]=j-i; } }
    if(n==1)
        minimum=1;
    else{
        for(i=0;i<n-1;i++){
            minimum=min(d[i],d[i+1]);
            if(d[i]<d[i+1])
                d[i+1]=d[i]; } }
    printf("%d",minimum);
    return 0; }