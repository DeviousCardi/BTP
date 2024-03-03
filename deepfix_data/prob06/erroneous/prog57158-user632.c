#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m, y, i, j=0, r=0;
	scanf("%d %d %d %d", &n, &m, &x, &y);
	int sold[n], vests[m], allot_sold[n], allot_vests[m];
	for (i=0; i<n; i++){
	    scanf("%d", &sold[i]); }
	    for (i=0; i<m; i++) {
	        scanf("%d", &vests[i]); }
	    if (n==0||m==0){
	        printf("0"); }
	    else{
	        for(i=0; (i<n&&j<m); i++){
	       if(sold[i]-x<=vests[j]&&sold[i]+y>=vests[j]) {
	             *(allot_sold+r)=i+1;
	             *(allot_vests+r)=j+1;
	             j++;
	             r++;
	         }else if(vests[j]<sold[i]-x){
	             i--; }
	         printf("%d\n",r);
	         for(i=0; i<r; i++) {
  printf("%d %d\n", *(allot_sold+i), *(allot_vests+i)); } }
	return 0; }