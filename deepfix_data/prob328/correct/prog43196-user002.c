#include <stdio.h>
#include <stdlib.h>
int fibonacci[20];
int fib(int n){
    if(n==0){
        return 0; }
    else if(n==1){
        return 1; }
    else{return (fib(n-1)+fib(n-2));} }
int f(int n){
    int i=0,a;
    while(fibonacci[i]<=n){
        if(fibonacci[i]==n){
            return 1; }
        i++; }
    if(fibonacci[i]>n){
        return 0; } }
int main() {
    int t;int k[500];
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++){
        scanf("%d",&k[i]); }
    int j;
    for(j=0;j<20;j++){
        fibonacci[j]=fib(j); }
    int m;
    for(m=0;m<t;m++){
        if(f(k[m])==1){
            printf("yes\n"); }
        else{
            printf("no\n"); } }
	return 0; }