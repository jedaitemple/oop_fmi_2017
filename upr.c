#include <stdio.h>
#include <stdlib.h>
	main() {
		int c;
		do {
			c = getchar();
			if (c == EOF ) {
				perror("getchar");
			}
			else {
				putchar(c);
			}
		} while (c != EOF);
		return 0;
	}
