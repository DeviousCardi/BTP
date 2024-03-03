#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int sum(int a[size1],int b[size2]){
    int i,j;
    long long int add1,add2,sum1=0,sum2=0;
    long long int sum;
    for (i=0;i<size1;i++){
        add1=(a[i])*pow(10,i);
        sum1=sum1+add1; }
    for (j=0;j<size2;j++){
        add2=(a[j])*pow(10,j);
        sum2=sum2+add2; }
    sum =sum1+sum2;
    return sum; }
int main() {
	int size1,size2;
	scanf("%d\n%d",&size1,&size2);
	int num1,num2;
	int
	for (i=0;i<size1;i++){
	    scanf("%d",&num1[i]); }
	for (j=0;j<size2;j++){
	    scanf("%d",&num2[j]); }
	printf("%lld",sum(num1[size1],num2[size2]))
	return 0; }