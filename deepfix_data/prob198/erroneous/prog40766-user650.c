#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n1,n2;
    int a[int];
    int b[int];
 scanf("%d",&n1);
 for(i=0;i<n1;i++)
 {scanf("%d",&a[i]);}
 scanf("%d",&n2);
 for(j=0;j<n2;j++)
 {scanf("%d",b[j]);}
 int min 9999999;
 for(i=0;i<n1;i++)
 {int flag=0;
     for(j=0;j<n2;j++){
         if(a[i]==b[j])
         flag=1;
        }if (flag==0) {
            if(a[i]<min)
            min=a[i]; }
 }if (min==9999999)
 printf("NO")
 else{printf("a[i]");
	return 0; }