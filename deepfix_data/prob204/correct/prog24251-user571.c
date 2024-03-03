#include <stdio.h>
#include <stdlib.h>
int main() {
    long long orignal;
    scanf("%lld",orignal);
    long long copy=orignal,new=0,d=0;
    while(copy>0) {
        d=copy%10;
        new=d*10+new;
        copy=copy/10; }
    if(new==orignal) {
        printf("YES"); }
    else {
        printf("NO"); }
	return 0; }