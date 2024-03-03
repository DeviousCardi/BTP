#include <stdio.h>
#include <stdlib.h>
int catnum[20];
void catalan(int num) {
    if(num==0) {
        catnum[0]=1;
        return; }
    else if(num<20) {
     catalan(num-1); }
    catnum[num]=2*(2*num-1)*catnum[num-1]/(num+1);
    return ; }
int main() {
	int t,i,j,num;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&num);
	    for(j=1;j<20;j++) {
	        if(catnum[j-1]<num&&catnum[j]>=num) {
	            printf("%d",catnum[j]);
	            break; } } }
	for(i=0;i<20;i++) {
	    printf("%d",catnum[i]); }
	return 0; }