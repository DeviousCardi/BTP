#include <stdio.h>
#include <stdlib.h>
void n_pairs(int array[],int S,int size){
    int i,j;
    for(i=0;i<size,i++){
        for(j=i+1;j<size,j++){
            if(array[j]+array[i]==S)
            {printf("(%d,%d)",array[i],array[j]); } } } }
int main() {
	int i,size,array[10000],S;
	scanf("%d",&size);
	for(i=0;i<size;i++){
	    scanf("%d",&array[i]); }
	scanf("%d",&S);
	n_pairs(array,S,size);
	return 0; }