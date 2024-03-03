#include <stdio.h>
#include <stdlib.h>
int mid;
int left_key_place(int a[],int start,int end,int key){
    if (start>end) return 0;
     mid=(start+end)/2;int j;
    if(a[mid]==key){for(j=start;j<mid;j++){
        if(a[j]==key)return j;
      }return mid; }
    else if (a[mid]>key)return left_key_place(a,start,mid-1,key);
    else return left_key_place(a,mid+1,end,key); }
int main() {
int a[4],i,key;
for(i=0;i<4;i++)
scanf("%d",&a[i]);
scanf("%d",&key);
printf("%d",left_key_place(a,0,3,key));
	return 0; }