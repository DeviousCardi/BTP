#include<stdio.h>
#include<strings.h>
void swape(int r[],int start,int end) {
    int i;
    if(start>end)return;
    i=r[end];
    r[end]=r[start];
    r[start]=i;
    swape(r,start+1,end-1); }
void swapo(int r[],int start,int end) {
    int i;
    if((start-end)==1)return;
    i=r[end];
    r[end]=r[start];
    r[start]=i;
    swapo(r,start+1,end-1); }
void rec(int ar[],int a) {
    int start=0,end=a-1;
    if(a<=1)return;
    if(a%2==0){
        swape(ar,start,end); }
    else
    swapo(ar,start,end);
    return; }
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    rec(arr,n);
    for(i=0;i<n;i++) {
        printf("%d",arr[i]); }
    return 0; }