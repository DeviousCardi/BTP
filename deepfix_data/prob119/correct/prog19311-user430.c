#include <stdio.h>
#include <stdlib.h>
void hanoi(int k,int from,int to,int temp,int count){
    if(k>1){
    count++;
    hanoi(k-1,from,temp,to,count); }
    else hanoi(1,from,to,temp,count); }
int main() {
	int t,a[20],i,count=0;;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<t;i++){
	    hanoi(a[i],1,2,3,count);
	    printf("%d\n",count); }
	return 0; }