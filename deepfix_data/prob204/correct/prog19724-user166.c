#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,count=0;
	int s[10],num[10];
    for(i=0;i<10;i++) {
        scanf("%c",&s[i]);
        count=count+1; }
    for(i=0;i<10;i++) {
        for(j=count-i;j>=0;j++) {
          num[j]=s[i]; } }
    if(num[10]==s[10]) {
        printf("Yes"); }
    else {
        printf("No"); }
	return 0; }