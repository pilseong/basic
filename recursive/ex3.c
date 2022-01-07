#include <stdio.h>

int func(int n) {
	
	if (n > 0) {
		return func(n-1) + n;
	}
	return 0;
}

int main() {
	printf("%d\n", func(5));
	return 0;
}
