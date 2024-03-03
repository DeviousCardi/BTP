#include <stdio.h>
#include <stdlib.h>
int main() {
   long int n,m,x,y,i,count=0,j=0,k=0;
   scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
   long int a[n],b[m],p[m],q[n];
   for(i=0;i<n;i++){
       scanf("%ld",a+i); }
    for(i=0;i<m;i++){
        scanf("%ld",b+i); }
    for(i=0;i<m;i++){
        if((b[i]>=a[j]&&b[i]<=a[j]+y)){
            p[k]=j+1;
            q[k]=i+1;
            j++;k++;
            count++ }
        else if(b[i]<a[j]-x){
            i++; }
        else if(b[i]>a[i]+y)
        j++ }
    printf("%ld\n",count);
    for(k=0;k<count;k++)
    printf("%ld %ld\n",p[k],q[k]);
	return 0; }