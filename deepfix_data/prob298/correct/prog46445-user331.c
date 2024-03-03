#include <stdio.h>
#include <stdlib.h>
int catalan_num(int n){
    int k;
    if(n==0){
        return 1; }
    else{
        k=(2*((2*n)-1))/(n+1);
        return k*catalan_num(n-1); } }
int main() {
    int n,i,j,count,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i=i+1){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i=i+1){
        count=0;
        for(j=0;j<17;j=j+1){
            if(a[i]==catalan_num(j)){
                count=count+1; }
            else{
                continue; } }
        if(count>0){
            printf("yes\n"); }
        else{
            printf("no\n"); } }
	return 0; }