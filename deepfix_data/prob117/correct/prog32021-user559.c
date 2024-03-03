#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int rcr(int n) {
    int s1;
    if(n==0){
        return 0; }
    else if(n==1){
        return 1; }
    else{
        s1=2*rcr(n-1)+1;
        return  s1; } }
int main(){
    int t,a[t],i,s2;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("\n%d",&a[i]); }
    for(i=0;i<t;i++){
        s2=rcr(a[i]);
        if(s2==0){
            printf("yes"); }
        if(((s2)-1)%2==0) {
            printf("yes\n"); }
        else
        printf("no\n"); }
    return 0; }