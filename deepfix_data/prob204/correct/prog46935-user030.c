#include <stdio.h>
#include <stdlib.h>
int main() {
    long int a,num,rev=0;
    scanf("%ld",&a);
    num=a;
    while(num!=0) {
        rev=(10*rev)+(num%10);
        num=num/10; }
    printf("%ld",rev);
    if(rev==num) {
        printf("YES"); }
    if(rev!=num) {
        printf("NO"); }
	return 0; }