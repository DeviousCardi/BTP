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
    int t,a[t],i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("\n%d",&a[i]); }
    for(i=0;i<t;i++){
        if(a[i]<0){
            printf("no"); }
else {
            printf("yes\n"); } }
    return 0; }