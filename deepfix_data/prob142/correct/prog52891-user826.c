#include <stdio.h>
#include <stdlib.h>
void move(int num,char from,char to,char aux) {
    if(num==1) {
        printf("%d %c %c",num,from,to);
        return; }
    move(num,from,aux,to);
    printf("%d %c %c",num,from,to);
    move(num,aux,to,from); }
int main() {
	int n;char A,B,C;
	scanf("%d",&n);
	move(1,A,C,B);
	return 0; }