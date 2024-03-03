#include <stdio.h>
#include <stdlib.h>
int search(int array[10][10],int x);
int main() {
    int element;
    scanf("%d",&element);
    int a[][6]={
                 {1,3,5,7,9,11},
                 {2,4,6,8,10,12},
                                };
     if(search(a,element))
     printf("match exist");
     else
     printf("match not found");
     return 0; }
int search(int array[10][10],int x) {
    int i,j;
    for(i=0;i<2;i++) {
        for(j=0;j<6;j++) {
            if(array[i][j]==x)
            return 1; } }
    return 0; }