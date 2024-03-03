#include <stdio.h>
#include <stdlib.h>
 int bino(int n,int k){
     if(n<k) return 0;
     if(k==0) return 1;
     if(n==0||k==0) return 1;
       return bino(n-1,k)+bino(n-1,k-1); }
int main() {
	int m,i,j,x=0,c=0,res=0;
	scanf("%d",&m);
	for(i=0;i<21;i++){
	    x++;
	    for(j=0;j<21;j++){
	        if (bino(i,j)==m){
	            printf("%d %d",i,j);
	            res =1;
	            break; }
	        c++; }
	    if (res==1) break; } }
	if(x==21&&c==21)
	printf("-1");
	return 0; }