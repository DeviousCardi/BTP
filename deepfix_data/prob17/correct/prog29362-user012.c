#include <stdio.h>
int main()
{    int count=0;
     int p=0;
    int n1,n2;
    int a1[20],a2[20];
    int k,m,l;
    scanf("%d\n",&n1);
    for(int i=0;i<n1;i++) {
        scanf("%d",&a1[i]); }
    scanf("\n%d\n",&n2);
    for(int i=0;i<n2;i++) {
        scanf("%d",&a2[i]); }
        for( k=0;k<n2;k++) {
           count=0;
           for(l=0;l<n1;l++) {
                for( m=0;m<n2-k;m++) {
                    if(a2[k+m]!=a1[l+m])
                    break;
                    else
                    count=count+1; } } }
                if(count==n2)
                printf("YES");
                else if(count!=n2)
                printf("NO");
	return 0; }