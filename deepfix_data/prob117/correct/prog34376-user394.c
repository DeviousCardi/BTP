#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int search(int num,int start,int end,int toh[25]){
    if(start>end){return 0;}
    int mid=(end+start)/2;
    if(toh[mid]==num) return 1;
    else if(toh[mid>num]){search(num,start,mid-1,toh);}
    else search(num,mid+1,end,toh); }
int hanoi(int n ){
    if(n==0){return 0;}
    int count=0;
    hanoi(n-1);
    count=count+1;
    hanoi(n-1);
    return count; }
int main() {
	int i,num,testcase[100],toh[25];
	scanf("%d",&num);
	for(i=0;i<25;i++){
	    toh[i]=hanoi(i);
	    printf("%d ",toh[i]); }
	for(i=0;i<num;i++){
	    scanf("%d",&testcase[i]);
	    if(search(testcase[i],0,25,toh)){printf("yes");}
	    else printf("no");
	    printf("\n"); }
	return 0; }