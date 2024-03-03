#include <stdio.h>
#include <stdlib.h>
int main() {
    int n , i , j ;
    scanf("%d",&n);
    void space(int a){
        for(i=0 ; i<a ; i++){
            printf(" "); }
    for(i=1;i<n;i++){
        space(n - i);
        printf ( "*");
    for(j=1;j<i;j++){
        space(j);
        printf("*");}
        printf("\n"); } }
	return 0; }