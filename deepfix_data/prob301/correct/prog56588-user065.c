#include <stdio.h>
#include <stdlib.h>
int max(int a, int b){
    if(a>=b){
        return a; }
    else {
        return b; } }
int A[10000];
int count[10000];
int main() {
    int n,i,temp1,temp2,max_count,mode;
    scanf("%d",&n);
    int B[10000];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        count[i]=1; }
    for(i=0;i<(n-1);i++){
        if(A[i]==A[i-1]){
            count[A[i]]=count[A[i]]+1; } }
    temp1 = max(count[0],count[1]);
    for(i=2;i<n;i++){
        max_count = max(count[i],temp1); }
    printf("%d\n",max_count);
    for(i=0;i<n;i++){
        if (count[i]==max_count){
            B[i]=i; } }
    temp2 = max(B[0],B[1]);
    for (i=2;i<n;i++){
        mode = max(B[i],temp2); }
    printf("%d",mode);
	return 0; }