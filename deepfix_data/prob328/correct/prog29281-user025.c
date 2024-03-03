#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int F(int p){
if(p==0)
return 0;
else if(p==1)
return 1;
else return (F(p-1)+F(p-2)); }
int k_check(int k){
    int j=0;
    if(F(j)<k)
    return 0;
    else {while(F(j)>k&&j<20){
        j++; }
    if(F(j)==k){
    return 1;}
   else  return 0;} }
int main() {
	int t,k,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    if(k_check(k))
	    printf("yes\n");
	    else printf("no\n"); }
	return 0; }