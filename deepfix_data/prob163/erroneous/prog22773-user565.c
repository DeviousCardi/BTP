#include <stdio.h>
#include <stdlib.h>
int main() {
       int n1;
       int n2;
       int num1,num2;
       int arr1[],arr2[],arr[];
       for(i=n1-1;i>0;i=i-1) {
           scanf("%d",&num1%10)
           arr1[n1-1]=num1%10;
           num1=num1/10; }
       scanf("%d",num1);
       arr1[i]=num1;
        for(i=n2-1;i>0;i=i-1) {
           scanf("%d",&num2%10)
           arr2[n2-1]=num2%10;
           num2=num2/10; }
       scanf("%d",num2);
       arr2[i]=num2;
       for(i=0;i<=n2;i=i+1) {
           if(arr1[i]+arr2[i]>=10)
           arr[i-1]=arr[i]+1;
           arr[i]=(arr1[i]+arr2[i])%10  }
	return 0; }