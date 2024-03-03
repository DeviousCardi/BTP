#include <stdio.h>
#include <stdlib.h>
void move(num,from,to,aux) {
    if(num==1) {
        printf("%d %c %c",num,from,to);
        return; }
    move(num,from,aux,to);
    printf("%d %c %c",num,from,to);
    move(num,aux,to,from); }
int main() {
	int n;
	scanf("%d",&n);
	move(1,A,C,B);
	return 0; }