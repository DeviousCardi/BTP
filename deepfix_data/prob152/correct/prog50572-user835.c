#include <stdio.h>
int num1;
int sum(int ar[],int a,int n) {
    if(n==a) {
        return ar[a]; }
    else {
        return ar[n]+sum(ar,a,n-1); } }
int checkSum(int ar[],int start,int end,int n) {
    int h,k,mid;
    if(end==n-1) {
        mid=(start+end)/2; }
    if(start>end) {
        return 0; }
    else {
        h=sum(ar,0,mid);
        k=sum(ar,mid+1,n-1);
        if(h==k) {
            return 1; }
        else if(h>k) {
            return checkSum(ar,start,mid-1,n); }
        else {
            return checkSum(ar,mid+1,n-1,n); } } }
int main() {
    int num1,i,h,ar[100000],k;
    scanf("%d\n",&num1);
    for(i=0;i<num1;i++) {
        scanf("%d ",&ar[i]); }
    h=checkSum(ar,0,num1-1,num1);
    if(h==1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }