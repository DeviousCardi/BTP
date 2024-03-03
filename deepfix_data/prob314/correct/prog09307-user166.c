#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,c,t,j,k;
	scanf("%d",&n);
	int s[20];
	int i=0;
	while(i<n){
	    scanf("%d",&c);
	    s[i]=c;
	    i=i+1; }
    scanf("%d",&t);
    for(j=0;j<t;j++){
        scanf("%d",&k);
        if(n==1) {
            printf("Yes\n"); }
        else if(k==0){
            if(s[0]<s[1])
            printf("Yes\n");
            else printf("No\n"); }
        else if(k==(n-1)){
            if(s[n-2]>s[n-1])
            printf("Yes\n");
            else printf("No\n"); }
        else if(k>0 && k<(n-1)){
            if(s[i]<s[i+1] && s[i]<s[i-1])
            printf("Yes\n");
            else printf("No\n"); } }
	return 0; }