#include <stdio.h>
#include <stdlib.h>
int tow(int n, char from, char to, char temp){
    int count=0;
    if(n==1){
        count=count+1; }
    tow(n-1, from, temp, to);
    count++;
    tow(n-1, temp, to, from);
    return count; }
int main() {
	int t;
	printf("s");
	return 0; }