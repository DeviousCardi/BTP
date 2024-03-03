#include <stdio.h>
#include <stdlib.h>
int max(int a, int b){
    if(a>=b){
        return a; }
    else {
        return b; } }
int main() {
    int A[10000];
    int count[10000];
    int n,i,max_count=0,mode=0;
    scanf("%d",&n);
    int B[10000];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]); }
    for (i=0;i<10000;i++){
        count[i]=1; }
    for(i=0;i<n;i++){
        if(A[i]==A[i+1]){
            count[A[i]]=count[A[i]]+1; } }
    for(i=0;i<=n;i++){
        max_count = max(count[i],max_count); }
    for(i=0;i<n;i++){
        if (count[i]==max_count){
            B[i]=i; } }
    for (i=0;i<n;i++){
        mode = max(B[i],mode); }
    printf("%d",mode);
	return 0; }