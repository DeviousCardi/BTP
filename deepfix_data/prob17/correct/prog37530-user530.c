#include <stdio.h>
int main() {
    int a,b,i,j,k,p,ch;
    scanf("%d\n",&a);
    int arr1[a];
    for(i=0;i<a;i++){
        scanf("%d ",&arr1[i]); }
    printf("\n");
    scanf("%d\n",&b);
    int arr2[b];
    for(j=0;j<b;j++){
        scanf("%d",&arr2[j]); }
        for(k=0;k<a;k++){
            ch=0;
            for(p=0;p<b;p++){
                if(arr2[p]==arr1[k+p]){
                ch=ch+1; } } }
    if(ch==b)
    printf("YES");
    else
    printf("NO");
	return 0; }