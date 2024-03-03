#include <stdio.h>
#include <stdlib.h>
int main() {
    int n , i , j ,sum;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&s[i]); }
    scanf("%d",&sum);
    for(i=0 ; i<n ; i++){
        for(j=i+1 ; j<n;j++ ){
            if(s[i] + s[j] == sum){
                printf("(%d,%d)/n",s[i] ,s[j]); } } }
	return 0; }