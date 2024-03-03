#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, len;
    int status=1;
    char inp[100];
    for(i=0;i<100;i++) {
        inp[i]=getchar();
        if(inp[i]==EOF) {
            len=i;
            break; } }
    i=0;
    while(i<(len-i-1)) {
        if(inp[i]==inp[len-i-1]) {
            i++;
            continue; }
        else {
            status=0;
            break; } }
    if(status==1)
    printf("YES\n");
    else
    printf("NO\n");
	return 0; }