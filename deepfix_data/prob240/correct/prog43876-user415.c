#include <stdio.h>
#include <stdlib.h>
int t=-1;
int cat(int s){
    int ans=0,p,n=0;
    while(t<=-1) {
    if(n==1||n==0) {
    ans= 1;
    break; }
    else
    for(p=1;p<n;p++)
    ans=ans+cat(p)*cat(n-p-1);
    if(ans>=s)
    t=n;
    else
    n+=1; }
    if(t>-1) {
        if(t==1||t==0)
        return 1;
        else
        for(p=1;p<t;p++)
        ans=ans+cat(p)*cat(t-p-1);
        return ans; } }
int main() {
	int q,i,k;
	scanf("%d",&q);
	for(i=0;i<q;i++) {
    scanf("%d\n",&k);
	t=-1;
	printf("%d\n",cat(k)); }
	return 0; }