#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,arr1[25],n2,arr2[25],i,flag=0,j,temp;
    scanf("%d", &n1);
    for(i=0; i<n1; i++) {
            scanf("%d", &arr1[i]); }
    scanf("%d", &n2);
    for(i=0 ;i<n2; i++) {
            scanf("%d", &arr2[i]); }
    for(i=0; i<n1; i++) {
            for(j=0; j<n1-1; j++) {
                    if(arr1[j]>arr1[j+1]) {
                            temp=arr1[j];
                            arr1[j]=arr1[j+1];
                            arr1[j+1]=temp; } } }
    for(i=0,j=0; i<n2; i++)
        { flag=1;
            if(arr2[i]==arr1[j]) {
                    flag=0;
                    j++;
                    i=-1; }
            if(j==n1)
                printf("NO"); }
    if(flag==1)
    printf("%d",arr1[j]);
	return 0; }