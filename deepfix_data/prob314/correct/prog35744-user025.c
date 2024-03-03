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
    if(p==0){
        if(num[0]<num[1]){
            printf("Yes\n");
        }else printf("No\n"); }
    else if(p==n-1){
        if(num[n-2]>num[n-1]){
            printf("Yes\n");
        } else printf("No\n"); }
    else
    if(num[p]<num[p+1]&&num[p]<num[p-1]){
        printf("Yes\n");
    }else printf("No\n"); }
	return 0; }