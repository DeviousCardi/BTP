#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,z,m,n,l=3,a;
    scanf("%d",&h);
    z=h;
    j=z;
     for(i=h;i>0;i--) {
       if(z>0) {
        for(k=h-i;k>0;k--)
           printf(" ");
        for(j=z;j>0;j--) {
            printf("*"); }
        z=z-2; }
      a=z;
      if(a==-1)
       printf("\n");
       a=1;
        if(z<0) {
          for(m=i;m>0;m--)
            printf(" ");
            if(l<h) {
               for(n=0;n<l;n++)
                printf("*");
              l=l+2; } }
        printf("\n"); }
	return 0; }