#include <stdio.h>
#include <stdlib.h>
int catalan[17];
int ctln(int n){
    if(n==0){
        return 1; }
    else{
        int sum=0;
        int i;
        for(i=0;i<=n;i++){
            sum=sum+ctln(i)*ctln(n-i); }
        return sum; } }
int main() {
    int t,i;
    scanf("%d",&t);
    int s[t];
    for(i=0;i<t;i++){
        scanf("%d",&s[i]); }
    int j;
    for(j=0;j<17;j++){
        catalan[j]=ctln(j); }
    int k=0,l;
    for(l=0;l<t;l++){
    while(k<17){
        if(s[l]==catalan[k]){
            printf("yes\n");
            break; }
        else{
            k++; } }
    if(k>=17){
        printf("no\n"); }
    l++; }
	return 0; }