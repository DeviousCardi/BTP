#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int catalan(int n){
    if(n<=1){
        return 1; }
    int i,sum=0;
    for(i=0;i<n;i++){
        sum=sum+catalan(i)*catalan(n-i-1); }
    return sum; }
int search(int arr[20],int n){
    int i=0;
    while(i<strlen(arr)&&n!=arr[i]){
        i++; }
    if(i<strlen(arr)){
        printf("yes\n"); }
    else printf("no\n");
    return 0; }
int main() {
    int t,i;
    scanf("%d",&t);
    int k[t],m[18];
    for(i=0;i<t;i++){
        scanf("%d\n",&k[i]); }
    for(i=0;i<18;i++){
        m[i]=catalan(i); }
    for(i=0;i<t;i++){
        search(m,k[i]); }
	return 0; }