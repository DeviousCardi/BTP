#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    long cat[18];
    cat[0]=1;
    for(i=1;i<18;i=i+1) {
        cat[i]=(4*cat[i-1])-(6*cat[i-1])/(i+2); }
    int t;long n;int res,i;
    scanf("%d",&t);
    for(i=0;i<t;i=i+1) {
	    scanf("%ld",&n);
	    res=0;
	    for(j=0;j<18;j=j+1) {
        if(cat[j]==n){res=1;break;} }
	    if(res==1){printf("yes\n");}
	    else{printf("no\n");} }
	return 0; }