# include <stdio.h>
int main(){
    int n,k,i,j,count;
    scanf("%d%d\n",&n,&k);
    int a[n],b[k+1],c[k+1];
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     for(i=0;i<k+1;i++)
      b[i]=i;
       for(i=0;i<k+1;i++)
        c[i]=0;
   for(i=0;i<k+1;i++){
       count=0;
       for(j=0;j<n;j++) {
           if(b[i]==a[j])
           count=count+1; }
       c[i]=count; }
    for(i=0;i<k+1;i++){
        for(j=1;j<=c[i];j++){
            printf("%d",b[i]); } }
    return 0; }