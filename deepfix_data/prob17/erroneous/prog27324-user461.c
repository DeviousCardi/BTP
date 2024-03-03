#include <stdio.h>
 void input (int t[],int n) {
        for(int i=0;i<n;i++)
            scanf("%d",&t[i]); }
int main() {
    int n1,n2,j,flag;
    scanf("%d",&n1);
    int a[n1];
    input(a,n1);
    scanf("%d",&n2);
    int b[n2];
    if (n1<n2)
    printf("NO\n");
    else{
        for(int i=0;i<n1;i++)
        {   flag=1;
            for(j=0;j<n2);j++) {
                  if(a[i+j]!=b[j])
                   {flag=0;break;} }
            if (flag==1)printf("YES");
            else if (flag==0)continue; }
        if(flag==0)print("NO"); }
	return 0; }