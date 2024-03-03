#include <stdio.h>
#include <stdlib.h>
void readarray(char arr[],int size) {
    int i=0;
    int ch=getchar();
	while(i<size && ch!=EOF) {
	    if(ch!=' ' && ch!='\n') {
	        arr[i]=ch;
	        i++; }
	    ch=getchar(); } }
int main() {
	char arr1[500];
    char arr2[500];
	int result[501];
	int size1,i,size2,num,carry=0;
	scanf("%d",&size1);
	scanf("%d",&size2);
	readarray(arr1,size1);
	readarray(arr2,size2);
	int size=(size1>=size2)? size1:size2;
	for(i=size-1;i>=0;i--) {
       num=arr1[i]+arr2[i]+carry;
       printf("%d\n",num);
       if(num>105)
       {carry=1;
       num=num-58-48; }
       else
       {carry=0;
       num=num-48-48; }
    result[i+1]=num;
    printf("%d\n",num); }
    return 0; }