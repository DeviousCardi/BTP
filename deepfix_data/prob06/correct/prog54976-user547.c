#include <stdio.h>
#include <stdlib.h>
void scan_values(int *u, int *v, int n, int m) {
    int i;
    for(i=1;i<n;i++) scanf("%d",u+i);
    scanf("%d\n",u+i);
    for(i=1;i<m;i++) scanf("%d",v+i);
    scanf("%d\n",v+i); }
int main() {
	int n,m,x,y,i;
	scanf("%d%d%d%d\n",&n,&m,&x,&y);
	int *u, *v;
	u = (int*) malloc((n+1)*sizeof(int));
	v = (int*) malloc((m+1)*sizeof(int));
	scan_values(u,v,n,m);
	int *min, *max;
	min = (int*) malloc((n+1)*sizeof(int));
	max = (int*) malloc((n+1)*sizeof(int));
	for(i=1;i<n+1;i++) min[i] = u[i] - x;
	for(i=1;i<n+1;i++) min[i] = u[i] + y;
	free(min);
	free(max);
	free(u);
	free(v);
	return 0; }