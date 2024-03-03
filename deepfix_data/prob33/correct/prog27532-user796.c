#include <stdio.h>
int main() {
int n,k,s,t,d;
scanf("%d",&n);
scanf("%d",&k);
scanf("%d",&t);
while(k>0) {
    s=t;
scanf("%d",&t);
if(s<t){
    d=t-s;}
    if(s>t){
    continue; }
    k--; }
if(d>=n){
        printf("yes"); }
    else{printf("no");}
    return 0; }