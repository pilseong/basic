#include <stdio.h>


// func(95) -> func(func(106)) -> func(105) -> func(func(115)

int func(int n) {
	if (n > 100)
		return n-10;
	else
		return func(func(n+11));
}

int main() {
	printf("%d\n", func(95));
	return 0;
}
