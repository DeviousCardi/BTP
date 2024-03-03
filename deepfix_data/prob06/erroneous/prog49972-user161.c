#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k;
	int ti,tj;
	int n , m , x , y ;
	int *a ,*ta , *b , *tb ;
	scanf("%d %d %d %d\n", &n , &m , &x , &y );
	a = ( int* )malloc ( n * sizeof(int) );
	ta = ( int* )malloc ( n * sizeof(int) )
	b = ( int* )malloc ( m * sizeof(int) );
	tb = ( int* )malloc ( m * sizeof(int) );
	for( i=0 ; i<n ; i++)
	   scanf("%d",&a[i]);
	for( i=0 ; i<m ; i++)
	   scanf("%d",&b[i]);
	i=0;j=0;ti=0;tj=0;
	while( i<m) {
	    if( a[i]-x < b[j] && a[i]+y > b[j] ) {
	        ta[ti]=a[i];
	        tb[tj]=b[j];
	        i++;ti++;j++;tj++;
	        continue; }
	  else
	  {i++; continue;} }
	   printf("%d\n",ti);
	   for( k=0 ; k<ti ; k++ )
	       printf("%d %d\n",ta[k],tb[k]);
	return 0; }