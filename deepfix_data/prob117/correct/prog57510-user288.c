#include <stdio.h>
#include <stdlib.h>
int transfer(int n,char from,char to,char temp)
{int count=0;
    if(n>0){
        transfer(n-1,from,temp,to);
        count++;
        transfer(n-1,temp,to,from);
    }return count; }
int main() {
	int n;
	scanf("%d",&n);
	transfer(n,'l','r','c');
	return 0; }