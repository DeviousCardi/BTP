#include <stdio.h>
#include <stdlib.h>
int main() {
    int num,i,temp=0;
    scanf("%d",&num);
    for(i=1;i<(num);i++) {
        if(num%i==0) {
            temp=temp+i; } }
    if(temp==num) {
        printf("YES"); }
    else {
        printf("NO"); }
	return 0; }