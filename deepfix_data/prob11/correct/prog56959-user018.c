#include <stdio.h>
int flag=0;
int sum(int ar[],int n,int s){
    int i;
    if(n==1){
        if (ar[0]==s){
            return 1; }
        else{
            return 0; } }
    if((sum(ar,n-1,s-ar[n-1])||sum(ar,n-1,s))==1){
        return 1; }
    else return 0; }
int main() {
    int n,i,a,s,ar[30];
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++){
        scanf("%d ",&ar[i]); }
    if(a==1){
        printf("YES"); }
    else{
        printf("NO"); }
    return 0; }