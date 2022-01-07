#include <stdio.h>

int func(int m, int n) {
	if (n == 0) return 1;
	else {
		if (n%2 == 0) {
			return func(m*m, n/2);
		} else {
			return m * func(m*m, (n-1)/2);
		}
	}
}

int main() {
	printf("%d\n", func(2, 10));
	return 0;
}
