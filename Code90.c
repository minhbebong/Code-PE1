#include<stdio.h>

int main(){
	int n;
	int i;
	int rs = 1;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		rs*=i;
	}
	printf("%d",rs);
	return 0;
}
