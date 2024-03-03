#include <stdio.h>
#include <stdlib.h>
int main() {
	long int N, ar[10000], i, mod[2], m[2] ;
	scanf("%ld", &N);
	for (i=0; i<N;i++)  {
	    scanf("%ld", &ar[i]); }
	mod[0]=ar[0]; mod[1]=ar[1]; m[0]=1; m[1]=-1;
	for(i=1;i<N;i++)  {
	    if (ar[i]==mod[0])
	        m[0]++;
	    else if (ar[i]==mod[1])
	        m[1]++;
	    else   {
	        if (m[0]>m[1])   {
	            m[1]=1;
	            mod[1]=ar[i]; }
	        else   {
	            m[0]=1;
	            mod[0]=ar[i]; } } }
	if (m[0]>m[1])
	    printf("%ld\n",mod[0]);
	else
	    printf("%ld\n",mod[1]);
	return 0; }