#include <stdio.h>
#include <stdlib.h>
int t=-1,n=0;
int cat(int s){
    int ans=0,p,q;
    while(t==-1) {
    if(n==1||n==0)
    ans= 1;
    else
    for(p=1;p<n;p++)
    ans=ans+cat(p)*cat(n-p-1);
    if(ans>s) {
        t=n-1;
        break; }
    else
    n+=1; }
    if(t!=-1) {
        printf("#$");
        q=t;
        if(q==1||q==0)
        return 1;
        else
        for(p=1;p<q;p++)
        ans=ans+cat(p)*cat(q-p-1);
        return ans; } }
int main() {
	int q,i,k;
	scanf("%d\n",&q);
	for(i=0;i<q;i++) {
    scanf("%d",&k);
	t=-1;n=0;
	printf("%d\n",cat(k)); }
	return 0; }