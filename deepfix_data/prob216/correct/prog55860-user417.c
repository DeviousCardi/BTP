#include <stdio.h>
#include <stdlib.h>
int main() {
    int num,element,i;
    scanf("%d",&num);
    scanf("%d",&element);
    int array[6]={1,3,5,7,9,11};
    while(i<num&&array[i]!=element)
    {  i++; }
    if(i<num)
    {   printf("%d",i+1); }
    if(i>num)
    {  printf("element wasn't found in the array");
    return 0; } }