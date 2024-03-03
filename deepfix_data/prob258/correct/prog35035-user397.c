#include <stdio.h>
#include <stdlib.h>
int main() {
    int num[20];
    int n,i,j;
    scanf("%d\n",&n);
    for(i=0;i<20;i++) {
        scanf("%d\n",&num[i]); }
    for(j=0;j<20;j++) {
        if((num[j+1]>num[j])&&(num[j+1]>num[j+2]))
        printf("Yes");
        else
        printf("No"); }
  	return 0; }