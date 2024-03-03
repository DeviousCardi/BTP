#include <stdio.h>
int main() {
    int n,i,j,exitroom,count=0,a,b;
    scanf("%d\n",&n);
    int arr[100];
    int arr1[100];
            for(j=0;j<n;j++){
                scanf("%d ",&arr[j]); }
    arr1[0]=1;
    j=1;
        for(i=1;j<100;){
            exitroom=arr[i-1];
            arr1[j]=exitroom;
            j++;
            i=exitroom; }
   for(k=1;k<100;k++){
       a=arr1[k];
       for(l=k+1;k<100;k++){
            if(arr1[l]=arr1[k]){
               b=l-k;
               a=k+b;
               break; } } }
   printf("%d %d",a,b);
    return 0; }