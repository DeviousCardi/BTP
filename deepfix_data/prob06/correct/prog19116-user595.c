#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,m,x,y;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    int *s=(int *)malloc(n*sizeof(int));
    int *v=(int *)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    for(i=0;i<m;i++)
    scanf("%d",&v[i]);
    if(n==0||m==0)
    printf("0");
    else{
    int count=0,a[200],b[200],k=0;
    i=0;j=0;
    while(i<n||j<m) {
        if(v[j]>=(s[i]-y)&&v[j]<=(s[i]+x)) {
            count++;a[k]=i+1;b[k]=j+1;i++;j++;k++; }
        else if(v[j]<(s[i]-y))j++;
        else i++; }
    printf("%d\n",count);
    for(i=0;i<k;i++)
        printf("%d %d\n",a[i],b[i]); }
	return 0; }