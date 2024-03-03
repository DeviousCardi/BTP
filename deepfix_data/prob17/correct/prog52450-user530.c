#include <stdio.h>
int main() {
    int a,b,i,j,k;
    scanf("%d\n",&a);
    int arr1[a];
    for(i=0;i<a;i++){
        scanf("%d ",&arr1[i]);
        printf("%d ",arr1[i]); }
    printf("\n");
    scanf("%d\n",&b);
    int arr2[b];
    for(j=0;j<b;j++){
        scanf("%d",&arr2[j]);
        printf("%d ",arr2[j]); }
        for(k=0;k<b;k++){
          if(arr2[k]==arr1[k]){
              continue;
              printf("YES"); } }
	return 0; }