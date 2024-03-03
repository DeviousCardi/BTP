#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,flag=1;
    int input[20];
    scanf("%d",&n);
      for(i=0;i<n;i++)
        scanf("%d",&input[i]);
      for(j=1;j<n-1;j++) {
         if(input[0]<input[1] || input[n-1]<input[n-2])
         { printf("Yes");flag=0;break;}
          if(input[j]<input[j-1] && input[j]<input[j+1])
          { printf("Yes");
          flag=0;
          break; }
         else
         flag=1; }
    if(flag==1)
     printf("No");
	return 0; }