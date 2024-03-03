#include <stdio.h>
#include <stdlib.h>
int main() {
          int num,i;
          scanf("%d",&num);
          int size[num];
          for(i=0;i<num;i++) {
              scanf("%d",&size[i]); }
          if(size[i]==size[i+1]&&size[i]==size[i-1])
          printf("%d",size[i]);
	return 0; }