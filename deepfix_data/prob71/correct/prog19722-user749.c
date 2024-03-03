#include <stdio.h>
#define MAX 100000
void merge(long int arr[], int start, int n){
    int mid=n/2;
    int i=start;
    int j=start+mid;
    int i_max=start+mid;
    int j_max=start+n;
    long int temp[MAX];
    int k;
    while(i<i_max&&j<j_max){
        for(k=0;k<n;k++){
         if(arr[i]<=arr[j]){
             temp[k]=arr[i];
             i++; }
         else{
             temp[k]=arr[j];
             j++; } } } }
void mergesort(long int arr[],int start, int n){
    int mid=n/2;
    if(n==1) return;
    else{
     mergesort(arr,start,mid);
     mergesort(arr,start+mid,n-mid);
     merge(arr,start,n); } }
int main() {
    int N;
    long int bids[MAX];
    int i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%ld",&bids[i]); }
    return 0; }