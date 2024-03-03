#include <stdio.h>
#include <stdlib.h>
int RIA(char t[],int size){
    int ch;
    int count=0;
    ch=getchar();
    while(ch!=EOF&&count<size){
                             t[count]=ch;
                             count++;
                             ch=getchar(); }
                              return count; }
int main() {
	int N1,N2;
	int a1[10];
	int a2[10];
	scanf("%d",&N1);
	RIA(a1,N1);
	scanf("%d",&N2);
	RIA(a2,N2);
	return 0; }