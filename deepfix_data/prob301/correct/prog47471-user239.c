#include <stdio.h>
#include <stdlib.h>
int main() {
          int num,i;
          scanf("%d",&num);
          int size[num];
          for(i=0;i<num;i++) {
              scanf("%d",&size[i]); }
          int z;
          for(i=0;i<num;i++)
          {  z=i;
             if(num==1)
              printf("%d",size[0]);
            else if (size[z]==size[z+1]&&size[z]==size[z-1])
                 printf("%d",size[z]) ; }
	return 0; }