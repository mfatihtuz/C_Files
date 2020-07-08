/*
Write a C program which reads two numbers n and p from the standard input (Keyboard) and calculate
the number of combinations we can make from n if you chose p, and then print it on screen.
*/

#include <stdio.h>
#include <stdlib.h>


int factorial(int n){
	if(n==0){
		return 1;
	}

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
