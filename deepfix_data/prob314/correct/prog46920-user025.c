#include <stdio.h>
#include <stdlib.h>
int main() {
int n,count,t,i,p;
scanf("%d\n",&n);
int num[n];
for(count=0;count<n;count++){
    scanf("%d\n",&num[count]); }
scanf("%d\n",&t);
for(i=0;i<t;i++){
    scanf("%d\n",&p);
    if(p>0){
        if(num[p-1]<=num[p]){
            printf("No\n"); continue; }
    }if(p<n){
        if(num[p]>=num[p+1]){
            printf("No\n"); continue; }
    } printf("Yes\n"); }
	return 0; }