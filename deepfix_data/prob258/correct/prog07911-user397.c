#include <stdio.h>
#include <stdlib.h>
int main() {
    int num[20];
    int n;
    int i,j;
    int check=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d\n",&num[i]); }
    for(j=0;j<n;j++) {
        if((num[j+1]>num[j])&&(num[j+1]>num[j+2])) {
          check=1;
          break; }
        else
         check=0; }
    if(check==1)
      printf("Yes");
    else
      printf("No");
  	return 0; }