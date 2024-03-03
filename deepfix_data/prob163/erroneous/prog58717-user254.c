include <stdio.h>
#include <stdlib.h>
int main() {
	int num1[500], num2[500];
	int sum[501], size1=0, size2=0, i=0, size=0, carry=0;
    scanf("%d", &size1);
    scanf("%d", &size2);
    int temp=0;
    for(i=0;i<size1;i++) {
        num1[i]=getchar() - '0'; }
    for(i=0;i<size2;i++) {
        num2[i]=getchar() - '0'; }
    if(size1>size2) size=size1;
	else size=size2;
	for(i=0;i<(size+1);i++) {
		sum[i]=n1[i] + n2[i]+ carry;
		if((n1[i] + n2[i]+ carry)>10)
		carry=(n1[i] + n2[i]+ carry)%10;
		else carry=0; }
	for(i=(size+1); i>0;i++)
	printf("%d", sum[i]);
	return 0; }