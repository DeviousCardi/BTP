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
        for(i=0;i<=n;i++){
            sum=sum+ctln(i)*ctln(n-i); } }
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
    for(j=0;j<17;j++){
        printf("%d\n",catalan[j]); }
	return 0; }