#include <stdio.h>
#include <stdlib.h>


int factorial(int n){
	int ans = 1;
	int i;
	for(i=2;i<=n;i++){
		ans *=i;
	}
	return ans;
}

int comb (int n, int p){
	return factorial(n) / (factorial(p) * factorial (n-p));
}

int main(){
	int x,y;
	printf("Enter number for 'comb(x,y)' >> \n");
	printf("x : ");
	scanf("%d", &x);
	printf("y : ");
	scanf("%d", &y);
	
	printf("Result is : %d",comb(x,y));
	return 0;
}
