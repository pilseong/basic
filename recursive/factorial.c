#include <stdio.h>

int func(int n) {
	if (n > 0) {
		return n * func(n-1);
	}
	else {
		return 1;
	} 
}

int main() {
	printf("%d\n", func(5));
	return 0;
}
