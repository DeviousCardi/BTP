#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
    char a[10000000];
    int ch;int count=0;
     i=0;
    ch=getchar();
    while(ch!=EOF) {
        a[i]=ch;
        ch=getchar();
        i=i+1; }
    for(j=0;j<i-1;j++) {
        if(a[j]==a[i-2]) {
            count=count+1; }
        else
        continue; }
    if(count==i-1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }