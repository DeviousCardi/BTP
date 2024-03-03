#include <stdio.h>
#include <stdlib.h>
int catalan[17];
int ctln(int n){
    int sum;
    if(n==0){
        sum=1; }
    else if(n==1){
        sum=1; }
    else{
        sum=0;
        int i;
        for(i=0;i<n;i++){
            sum=sum+ctln(i)*ctln(n-i-1); } }
    return sum; }
int main() {
    int t,i;
    scanf("%d",&t);
    int s[t];
    for(i=0;i<t;i++){
        scanf("%d",&s[i]); }
    int j;
    for(j=0;j<17;j++){
        catalan[j]=ctln(j); }
    int k,l;
    for(k=0;k<t;k++){
        for(l=0;l<17;l++){
            if(catalan[l]==s[k]){
                printf("yes\n");
                break; } }
        if(l>=17){
            printf("no\n"); }
        l++; }
	return 0; }