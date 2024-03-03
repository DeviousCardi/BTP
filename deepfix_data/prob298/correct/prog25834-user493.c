#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n<=1){
        return 1; }
    int i,sum=0;
    for(i=0;i<n;i++){
        sum=sum+catalan(i)*catalan(n-i-1); }
    return sum; }
int main() {
    int t,i,j;
    scanf("%d",&t);
    int k[t],m[18];
    for(i=0;i<t;i++){
        scanf("%d\n",&k[i]); }
    for(i=0;i<18;i++){
        m[i]=catalan(i); }
    for(i=0;i<t;i++){
        for(j=0;j<18;j++){
            if(k[i]==catalan(j)){
                printf("yes\n"); } } }
	return 0; }