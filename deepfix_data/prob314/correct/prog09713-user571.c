#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t,i=0,len,flag=0;
    scanf("Enter size:%d",&n);
    int arr[n];
    len=n;
    while(i<n) {
        scanf("Enter array:%d",&arr[i++]); }
    if(n==1) {
        printf("Yes");
        return 0; }
    scanf("No of test case :%d",&t);
    while(t>0) {
        scanf("Index :%d",&i);
        if(i==0) {
            if(arr[0]<arr[1]) {
                 printf("Yes\n");flag=1; } }
        if(i==(len-1)) {
            if(arr[len-1]<arr[len-2]) {
                 printf("Yes\n");
                 flag=1; } }
        if((arr[i]<arr[i+1]) && (arr[i]<arr[i-1])) {
            printf("Yes\n");
            flag=1; }
        if(flag==0) {
            printf("No\n"); }
        flag=0;
        t--; }
	return 0; }