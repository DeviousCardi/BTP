#include <stdio.h>
#include <stdlib.h>
void hanoi(int k,char from,char to,char temp,int count){
    if(k==0){ printf("%d",count);
    return;}
    count++;
    if(k>1){
    hanoi(k-1,from,temp,to,count);
    hanoi(k-1,temp,to,from,count); }
    printf("%d",count);
    return; }
int main() {
	int t,a[20],i,count=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&a[i]); }
	for(i=0;i<t;i++){
	    hanoi(a[i],'L','R','C',count);
	    printf("\n"); }
	return 0; }