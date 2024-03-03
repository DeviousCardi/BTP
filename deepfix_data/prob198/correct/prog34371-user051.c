#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,arr1[20],n2,arr2[20],min=9999,flag,i,j;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
        scanf("%d",&arr2[i]);
    for(j=0;j<n1;j++) {
        for(i=0;i<n2;i++) {
            flag=1;
            if(arr1[j]==arr2[i]) {
                flag=0;
                break; } }
        if(flag==1) {
            if(min>arr1[j])
                min=arr1[j]; } }
    if(flag==0 && min==9999)
        printf("NO");
    else
        printf("%d",min);
	return 0; }