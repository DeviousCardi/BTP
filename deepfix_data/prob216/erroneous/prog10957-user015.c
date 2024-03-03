#include <stdio.h>
#include <stdlib.h>
int main() {
    int num,i,input[],output;
    scanf("%d\n",&n);
    for(i=0;i<num;i++){
        scanf("%d\n",&input[i]); }
    for(i=0;i<num;i++){
        output[i]=fibonacci(input[i]);
        printf("%d\n",&output[i]); }
	return 0; }