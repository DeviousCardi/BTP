#include <stdio.h>
#include <stdlib.h>
void towers(int , char,char,char);
int main() {
    int num;
    scanf("%d",&num);
    towers(num,'A','B','C');
    return 0; }
void towers(int num,char first,char second,char third) {
    if(num==1) {
        printf("move disk 1 first%c to second%c",first,second);
        return; }
    towers(num-1,first,third,second);
    printf("\nmove disks first%c to second",num,first,second);
    towers(num-1,third,second,first); }