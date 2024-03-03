#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    int a[1000];
    int count=0;
    int count1=0;
    for(i=0;i<1000;i++) {
        scanf("%d",&a[i]);
        if(a[i]!=EOF&&a[i]>0) {
            count=count+1; }
        return count; }
    for(i=0;i<count;i++) {
        if(a[i]==a[count-1-i]) {
            count1=count1+1; }
        else {
            continue; } }
    if(count1==count-1) {
        printf("YES"); }
    else {
        printf("NO"); }
	return 0; }