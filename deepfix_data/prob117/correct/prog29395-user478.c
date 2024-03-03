#include <stdio.h>
#include <stdlib.h>
int steps(int n,char first,char third,char second){
    int count;
    if(n>0){
        count=steps(n-1,first,second,third);
        count++;
        count+=steps(n-1,second,third,first); }
    return count; }
int main() {
    int c=steps(0,'a','b','c');
    printf("%d",c);
	return 0; }