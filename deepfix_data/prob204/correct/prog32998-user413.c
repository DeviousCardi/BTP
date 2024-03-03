#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    int a[1000];
    int count=0;
    for(i=0;i<1000;i++) {
        scanf("%d",&a[i]);
        if(a[i]!=EOF&&a[i]>0) {
            count=count+1; } }
    for(i=0;i<count;i++) {
    printf("%d",a[i]);}
        if(a[i]==a[count-1-i]) {
            printf("YES"); }
        else {
            printf("NO"); }
	return 0; }