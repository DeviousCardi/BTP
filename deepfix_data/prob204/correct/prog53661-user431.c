#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i=1, len;
    int status=1;
    scanf("%d", &n);
    char inp[100];
    for(i=0;i<100;i++) {
        int a=getchar();
        if(a==EOF) {
            len=i;
            break; } }
    for(i=0;i<len;i++) {
        printf("%c", inp[i]); }
    i=0;
    while(i<(len-i-1)) {
        if(inp[i]==inp[len-i-1])
        continue;
        else {
            status=0;
            break; } }
    if(status==1)
    printf("YES\n");
    else
    printf("NO\n");
	return 0; }