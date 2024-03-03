#include <stdio.h>
int main() {
	int n1 , n2,count =0;
	scanf("%d",&n1);
	int s[n1];
	for(int i=0;i<n1;i++)
	scanf("%d",&s[i]);
	scanf("%d",&n2);
	int ss[n2];
	for(int k=0;k<n2;k++)
	scanf("%d",&ss[k]);
	if(n1<n2)
	printf("NO");
	else if(n1>=n2) {
	    for(int m=0;m<n1;m++)
	    {int n=m;
	        if(s[m]==ss[0]) {
	            if((n1-m)>=n2) {
	                for(int j=0;j<n2;j++) {
	                   if(ss[j]==s[m])
	                   count=count +1;
	                   m=m+1; }
	                if(count==n2)
	               { printf("YES");
	               break;}
	                else
	               { printf("NO");
	                break;} }
	            else if((n1-m)<n2)
	           { printf("NO");
	            break; } }
	        m=n; } }
	else if(n1>=n2)
	printf("NO");
	return 0; }