#include <stdio.h>
#include <stdlib.h>
int n;
int aliceBars(int *ptr) {
    if(n==1)
    return 1;
    int i=0,j=n-1;
    while(j-i>1) {
        if(*(ptr+i)==0)
        i++;
        if(*(ptr+j)==0)
        j--;
        if(i==j)
        i++;
        if(*(ptr+i)<*(ptr+j)) {
            *(ptr+j)=*(ptr+j)-*(ptr+i);
            *(ptr+i)=0; }
        else {
            *(ptr+i)=*(ptr+i)-*(ptr+j);
            *(ptr+j)=0; } }
    return i+1; }
int main() {
	int i;
	scanf("%d",&n);
	int *ptr=(int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++) {
	    scanf("%d",&ptr[i]); }
	int Alice=aliceBars(ptr);
	printf("%d %d",Alice,n-Alice);
	return 0; }