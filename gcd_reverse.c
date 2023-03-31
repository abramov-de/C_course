#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b, d;
    scanf("%d%d", &a, &b);
    d = gcd(a, b);
    printf("%d\n", d);
    return 0;
}

//gcd(a,b) = gcd(b, a % b);
//gcd(a,0) = a;

int gcd(int a, int b){
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
