#include <stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d\n",&n);
    int arr[2*n];
    int dist[n];
    int k=0;
    for(i=0;i<(2*n);i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<(2*n);i++) {
        for(j=i+1;j<(2*n);j++) {
            if(arr[i]==arr[j]) {
                dist[k]=(j-i);
                k=k+1; } } }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(dist[i]>dist[j]) {
                temp=dist[i];
                dist[i]=dist[j];
                dist[j]=temp; } } }
    printf("%d",dist[0]);
    return 0; }