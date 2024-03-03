#include <stdio.h>
#include <stdlib.h>
int main() {
    int num,rev=0;
    scanf("%d",&num);
    while(num!=0) {
        rev=(10*rev)+(num%10);
        num=num/10; }
    if(rev==num) {
        printf("YES"); }
    if(rev!=num) {
        printf("NO"); }
	return 0; }