#include <stdio.h>
int main() {
int n,k,s,t,d;
scanf("%d",&n);
scanf("%d",&k);
scanf("%d",&t);
while(k>1) {
    s=t;
scanf("%d",&t);
if(s<t){
    d=t-s;}
    if(s>t){
    continue; }
k--; }
if(d>=n){
        printf("No"); }
    else{printf("Yes");}
    return 0; }