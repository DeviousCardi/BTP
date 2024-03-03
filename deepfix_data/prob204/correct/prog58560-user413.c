#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    int a[1000];
    int count=0;
    scanf("%d",&n);
    for(i=0;i<1000;i++) {
        if(n!=EOF&&n>0) {
            a[i]=n;
            count=count+1;
            scanf("%d",&n); }
        return count; }
    for(i=0;i<count;i++) {
        if(a[i]==a[count-1-i]) {
            printf("YES"); }
        else {
            printf("NO"); } }
	return 0; }