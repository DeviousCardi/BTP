#include <stdio.h>
int sum(int ar[],int a,int n) {
    if(n==a) {
        return 0; }
    else {
        return ar[n]+sum(ar,a,n-1); } }
int checkSum(int ar[],int start,int end,int n) {
    int h,k;
    if(start>end) {
        return 0; }
    else {
        h=sum(ar,0,mid);
        k=sum(ar,mid+1,n);
        if(h==k) {
            return 1; }
        else if(h>k) {
            return checkSum(ar,start,mid-1,n); }
        else {
            return checkSum(ar,mid+1,n,n); } } }
int main() {
    scanf("%d\n",&num1);
    for(i=0;i<num1;i++) {
        scanf("%d ",&ar[i]); }
    h=checkSum(ar,0;num1-1;num1-1);
    if(h==1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }