#include <stdio.h>
#include <stdlib.h>
int no_of_soldiers(int *a,int *b,int u,int v,int k,int l)
{int i,j,count=0;
 for(i=0;i<v;i++)
 {for(j=0;j<u;j++)
 if(b[i]==a[j])
 {count++;}
 else if(b[i]-2<a[j]||b[i]+2>a[j]) {
     printf("%d %d\n",i,j); } }
 return count; }
int main() {
	int n,m,x,y,s,i;
    scanf("%d %d %d %d",&m,&n,&x,&y);
    int *a;
    int *b;
    a=(int*)malloc(m*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    for(i=0;i<m;i++)
    {scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {scanf("%d",&b[i]);}
s=no_of_soldiers(a,b,m,n,x,y);
printf("%d",s);
	return 0; }