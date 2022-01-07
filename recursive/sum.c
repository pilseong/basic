#include <stdio.h>

int func(int n) {
	if (n > 0) {
		return n + func(n-1);
	}
	return 0;
}

int main() {
	printf("%d\n", func(10));
	return 0;
}
