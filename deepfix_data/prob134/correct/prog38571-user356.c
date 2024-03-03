#include <stdio.h>
#include <stdlib.h>
int b(int n,int k){
    if(n<k){
        return 0;}
        else if((n==0)&&(k==0))
        {return 1;}
        else if(k==0)
        {return 1;}
        else
        return b(n-1,k)+b(n-1,k-1); }
int main() {
	int p,n,k,flag=0;
	scanf("%d",&p);
	for(n=0;n<=20;n++){
	for(k=0;k<=n;k++){
	if(p==b(n,k)) {
	   flag=1;
	   break;
	}}
	    if(flag==1)
	    break; }
	if(flag==1){
	     printf("%d %d",n,k); }
    else
    printf("-1");
	return 0; }