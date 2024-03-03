#include <stdio.h>
#include <stdlib.h>
int main() {
    int num[20];
    int n,i,j,count=0;
    scanf("%d\n",&n);
    for(i=0;i<20;i++) {
        scanf("%d\n",&num[i]); }
    for(j=0;j<20;j++) {
        if((num[j]>num[j-1])&&(num[j]>num[j+1]))
        {count++;}
        else
        count=0; }
    if(count>0)
    printf("Yes");
    else
    printf("No");
  	return 0; }