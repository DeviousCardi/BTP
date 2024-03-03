#include <stdio.h>
#include <stdlib.h>
int main() {
	          int ti;
	          float tax;
	          scanf("%d",&ti);
	          if(ti<=200000)
	          tax=0;
	          else if(200001<=ti && ti<=500000)
	          tax=(10/100)*(ti-200000);
	          else if(500001<=ti && ti<=1000000)
	          tax=30000+((20/100)*(ti-500000));
	          else
	          tax=130000+((30/100)*(ti-1000000));
	          printf("%.2f",tax);
	return 0; }