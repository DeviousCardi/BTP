#include <stdio.h>
#include <stdlib.h>
int hanoi(int k,char from,char to,char temp){
    int count;
    if(k>0){
    count=hanoi(k-1,from,temp,to);
    count++;
    count=count+hanoi(k-1,temp,to,from); }
    return count; }
int main() {
	int t,a[20],i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&a[i]); }
	for(i=0;i<t;i++){
	    printf("%d",hanoi(a[i],'L','R','C'));
	    printf("\n"); }
	return 0; }