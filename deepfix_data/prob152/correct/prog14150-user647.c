#include <stdio.h>
int checkdec(int pivot,int t[],int size,int total){
    int i,sum=0;
    if(pivot<=0){
        return 0; }
    for(i=0;i<pivot;i++){
        sum=sum+t[i]; }
    if(sum==(total-sum)){
        return 1; }
    else{
        return(pivot--,t,size,total); } }
int checkinc(int pivot,int t[],int size,int total){
    int i,sum=0;
    if(pivot>=size){
        return checkdec(size/2,t,size,total); }
    for(i=0;i<pivot;i++){
        sum=sum+t[i]; }
    if(sum==(total-sum)){
        return 1; }
    else{
        return(pivot++,t,size,total); } }
int main() {
    int n,i,total=0,truth=0;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        total=total+arr[i]; }
    truth=truth+checkinc(n/2,arr,n,total);
    if(truth!=0){
        printf("YES"); }
    else { printf("NO");}
    return 0; }