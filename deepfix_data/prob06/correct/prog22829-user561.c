#include <stdio.h>
#include <stdlib.h>
int main() {
    int m,n,x,y,i,j=0,arr1[m],arr2[n],arr[n][2];
    scanf ("%d%d%d%d",&m,&n,&x,&y);
    for (i=0;i<m;i++)
    scanf ("%d",&arr1[i]);
    for (i=0;i<n;i++)
    scanf ("%d",&arr2[i]);
    for (i=0;i<m;i++) {
        if ((arr1[i]+y)>=arr2[j]&&(arr1[i]-x)<=arr2[j]) {
            arr[j][0]=i+1;
            arr[j][1]=j+1;
            j++; } }
    printf ("%d\n",j);
    for (i=0;i<j;i++)
    printf ("%d %d\n",arr[i][0],arr[i][1]);
	return 0; }