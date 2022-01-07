#include <stdio.h>

void func(int n) {
	if (n > 0) {
		printf("%d ", n);
		func(n-1);
	   	func(n-1);
	}
}

int main() {
	func(5);
	printf("\n");
	return 0;
}
