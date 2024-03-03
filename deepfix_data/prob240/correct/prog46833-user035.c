#include <stdio.h>
#include <stdlib.h>
int catnum[15];
void catalan(int num) {
    if(num==0) {
        catnum[0]=1;
        return; }
    else if(num<15) {
     catalan(num-1); }
    catnum[num]=2*(2*num-1)*catnum[num-1]/(num+1);
    return ; }
int main() {
	int t,i,j,num;
	scanf("%d",&t);
	catalan(14);
	for(i=0;i<t;i++) {
	    scanf("%d",&num);
	    for(j=1;j<15;j++) {
	        if(catnum[j-1]<num&&catnum[j]>=num) {
	            printf("%d",catnum[j]);
	            break; } } }
	for(i=0;i<15;i++) {
	    printf("%d \n",catnum[i]); }
	return 0; }