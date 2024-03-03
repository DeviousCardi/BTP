#include <stdio.h>
#include <stdlib.h>
void readarray(int arr[],int size) {
    int i=0;
    int ch=getchar();
	while(i<size && ch!=EOF) {
	    arr[i]=ch;
	    i++;
	    ch=getchar(); } }
int main() {
	int arr1[500];
    int arr2[500];
	int size1,i,size2;
	scanf("%d",&size1);
	scanf("%d",&size2);
	readarray(arr1,size1);
	for(i=0;i<size;i++) {
        printf("%d",arr1[i]); }
    return 0; }