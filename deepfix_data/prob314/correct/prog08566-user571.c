#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t,i,len;
    scanf("%d",&n);
    int arr[n];
    len=n;
    while(n>=0) {
        scanf("%d",&arr[--n]); }
    scanf("%d",&t);
    while(t>0) {
        scanf("%d",&i);
        if(i==0) {
            if(arr[0]<arr[1])
             printf("Yes"); }
        else if(i==(len-1)) {
            if(arr[len-1]<arr[len-2])
             printf("Yes"); }
        else if((arr[i]<arr[i+1]) && (arr[i]<arr[i-1])) {
            printf("Yes\n"); }
        else {
            printf("No\n"); } }
	return 0; }