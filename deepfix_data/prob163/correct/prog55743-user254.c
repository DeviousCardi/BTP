#include <stdio.h>
#include <stdlib.h>
int num1[500], num2[500], sum[501], size1=0, size2=0;
void takeinput();
void takeinput() {
    int temp=0, i=0;
    for(i=0;i<size1;i++) {
        scanf("%c", &temp);
        num1[i]=temp - '0';
    } printf("%d", num1[1]);
    for(i=0;i<size2;i++) {
        scanf("%c", &temp);
        num2[i]=temp - '0'; } }
int main() {
    int size1, size2, i=0;
    scanf("%d", &size1);
    scanf("%d", &size2);
    takeinput();
	return 0; }