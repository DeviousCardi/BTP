#include <stdio.h>
#include <stdlib.h>
int num1[500], num2[500], sum[501];
void takeinput(int a[], int size);
void takeinput(int a[], int size) {
    int chr=0, i=0;
    for(i=0;i<size;i++) {
        chr=getchar();
        a[i]=chr - '0'; } }
int main() {
    int size1, size2;
    scanf("%d", &size1);
    scanf("%d", &size2);
    takeinput(num1, size1);
    takeinput(num2, size2);
	return 0; }