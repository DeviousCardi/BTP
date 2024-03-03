#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,i,j,k,p,q,c1,ch,count;
	scanf("%d\n",&a);
	int	arr1[a];
	for(i=0;i<a;i++){
	    scanf("%d\n",&arr1[i]); }
	scanf("%d\n",&b);
	int arr2[b];
    for(j=0;j<b;j++){
        scanf("%d\n",&arr2[j]); }
    ch=arr1[0];
    for(k=0;k<a;k++){
        if(ch<arr1[k]){
            count=ch;
        ch=arr1[k];
       arr1[k]=count; } }
    q=0;
    for(k=k-1;k>=0;k--){
        for(p=0;p<b;p++){
            if(arr2[p]==arr1[k]){
                q=q+1;
                c1=0;
                break; }
            else{
                c1=arr1[k];
                q=0; } }
      if(q=0)
      printf("%d",c1);
      break; }
    if(q==b)
        printf("NO");
	return 0; }