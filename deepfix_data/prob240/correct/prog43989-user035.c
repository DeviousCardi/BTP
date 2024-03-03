#include <stdio.h>
#include <stdlib.h>
int catnum[20];
void catalan(int num) {
    int i;
    if(num==0) {
        catnum[0]=1;
        return; }
    else if(num<20) {
     catalan(num-1); }
    for(i=0;i<num-1;i++) {
        catnum[num]+=catnum[i]*catnum[num-i-1]; }
    return ; }
int main() {
	int t,i,j,num;
	scanf("%d",&t);
	catalan(19);
	for(i=0;i<t;i++) {
	    scanf("%d",&num);
	    for(j=1;j<20;j++) {
	        if(catnum[j-1]<num&&catnum[j]>=num) {
	            printf("%d\n",catnum[j-1]);
	            break; } } }
	return 0; }