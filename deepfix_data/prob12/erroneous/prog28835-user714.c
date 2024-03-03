#include <stdio.h>
int min(int a,int b){
    if(b<a)
    return b;
    else
    return a; }
int main(){
    int n;
    scanf("%d",&n);
    int arr[2n];
    int d[n]
    int min(int,int);
    for(i=0;i<2n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==arr[j])
                d[i]=j-i; } }
    for(i=0;i<n-1;i++){
        minimum=min(d[i],d[i+1]);
        if(d[i]<d[i+1])
            d[i+1]=d[i]; }
    printf("%d",minimum);
    return 0; }