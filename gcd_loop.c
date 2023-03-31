#include <stdio.h>

int gcd(int a, int b);

int main(){
	int a, b, d;
	scanf("%d%d", &a, &b);
	d = gcd(a, b);
	printf("%d\n", d);
}

int gcd(int a, int b){
	if (b == 0)
		return a;
	while (b != 0){
		int tmp = a;
		a = b;
		b = tmp % a;	
	}
	return a;
}
