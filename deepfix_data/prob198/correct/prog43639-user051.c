#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,arr1[20],n2,arr2[20],min=0,flag=0,i,j;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    scanf("%d",&n2);
    for(i=0;i<n2;i++) {
        scanf("%d",&arr2[i]); }
    for(j=0;j<n1;j++) {
        for(i=0;i<n2;i++)
            if(arr2[i]!=arr1[j]) {
                if(min>arr1[j])
                    flag=1; } }
    if(flag==0)
        printf("NO");
    else
        printf("%d",min);
	return 0; }