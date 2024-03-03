#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j;
    int arr1[100],arr2[100];
    int count=0;
    scanf("%d %d %d %d\n",&n,&m,&x,&y);
    for(i=0;i<n;i++)
    	scanf("%d\n",&arr1[i]);
    for(j=0;j<m;j++)
    	scanf("%d\n",&arr2[j]);
    for(i=0,j=0;j<m && i<n;i++) {
    	if(arr1[i]-x<=arr2[j] && arr2[j]<=arr1[i]+y) {
            count++;
        	j++; }
    	else if(arr2[j]<arr1[i]-x) {
        	j++;
        	i--; } }
    printf("%d\n",count);
    for(i=0,j=0;i<n&&j<m;i++) {
        if (arr2[j]>=arr1[i]-x&&arr1[i]+y>=arr2[j]) {
    	    printf("%d %d\n",sno[i],wno[i]);
    	    j++; }
        else if (arr1[i]-x>arr2[j]) {
        j++;i-- } }
    return 0; }