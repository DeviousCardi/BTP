#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
void input (int a[],int size){
    int i;
    for(i=0;i<size;i++) {
        scanf("%d",&a[i]); } }
int main() {
    int size1,,hand=0;
    scanf("%d\n%d",&size1,&size2);
    int num1[size1],num2[size2];
    int sum[max(size1,size2)+1];
    input(num1[],size1);
    input(num1[],size1);
    for(i=max(size1,size2);i>=0;i--) {
     sum[i]=(num1[i]+num2[i])%10+hand;
     hand=(num1[i]+num2[i])/10;
     printf("%d",&sum); }
    return 0; }