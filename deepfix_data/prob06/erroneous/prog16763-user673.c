#include <stdio.h>
#include <stdlib.h>
int main() {
	int i , j, count = 0 ;
	int n , v , x , y  ;
	scanf("%d",&n) ;
	scanf("%d",&v) ;
    scanf("%d",&x) ;
	scanf("%d",&y) ;
	int *sol = (int*)malloc(n * sizeof(int)) ;
	int *vest = (int*)malloc(v * sizeof(int)) ;
	for(i=0 ; i <n; i++){
	    scanf("%d",sol + i ); }
	for(i=0 ; i<v ; i++){
	    scanf("%d",vest+i) ; }
   printf("%d\n",count) ;
       for(i=j ; i<n ; i++){
           if(sol[i]-x <=vest[j] && vest[j] <= sol[i]+y){
              printf("%d %d\n" , i+1 , j+1) ;
              break ; } } }
	return 0; }