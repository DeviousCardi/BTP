#include <stdio.h>
#include <stdlib.h>
int main() {
    int element,i=1,j=0;
    scanf("%d",&element);
    int array[][6]={
                 {1,3,5,7,9,11},
                 {2,4,6,8,10,12},
                                };
    for(i=1;i<2;i++) {
        for(j=0;j<6;j++) {
            if(array[i][j]==element)
            break ; } }
   printf("%d,%d",i,j);
    return 0; }