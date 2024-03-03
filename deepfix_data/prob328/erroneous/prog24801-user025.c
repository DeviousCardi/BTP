#include <stdio.h>
#include <stdlib.h>
int F(int p){
if(p==0)
return 0;
else if(p==1)
return 1;
else F(p-1)+F(p-2); }
int k_check(int k){
    int j=0;
    while(f(j)>k){
        k++ }
    if(f(j)==k)
    return 1;
    return 0; }
int main() {
	int t,k,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    if(k_check(k))
	    printf("yes");
	    else printf("no"); }
	return 0; }