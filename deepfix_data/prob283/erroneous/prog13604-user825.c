#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int call(int m,int n) {
    int ans;
    if(m==0){
        ans=n+1;
        return ans; }
    else if((m>0)&&(n==0)){
        return call(m-1,1); }
    else((m>0)&&(n>0)){
        return call(m-1,call(m,n-1)); } }
void acker(int k){
    int i,j;
    for(i = 0; i<10 ;i++){
    for(j = 0; j<10 ;j++){
        if(k==call(i,j)){
                printf("%d%d",i,j); }
        else{
                printf("-1"); } } } }
int main() {
    int k;
    scanf("%d",&k);
    acker(k);
    return 0; }