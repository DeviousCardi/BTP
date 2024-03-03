#include <stdio.h>
int checkdec(int pivot,int t[],int size,int total){
    int i,x,sum=0;
    if(pivot<=0){
        printf("NO");
        return 0; }
    for(i=0;i<pivot;i++){
        sum=sum+t[i]; }
    if(sum==(total-sum)){
        printf("YES");
        return 0; }
    else{
        return checkdec(--pivot,t,size,total); } }
int checkinc(int pivot,int t[],int size,int total){
    int i,x,sum=0;
    if(pivot>=size){
        return checkdec(size/2,t,size,total); }
    for(i=0;i<pivot;i++){
        sum=sum+t[i]; }
    if(sum==(total-sum)){
        printf("YES");
        return 0; }
    else{
        return checkinc(++pivot,t,size,total); } }
int main() {
    int n,i,total=0,truth=0;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        total=total+arr[i]; }
    checkinc(n/2,arr,n,total);
    return 0; }