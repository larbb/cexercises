#include <stdio.h>

int main()
{
	int c;
	int nl = 0, bl = 0, tb = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == '\t')
			++tb; 	
		if (c == ' ')
			++bl;
	}

	printf("New Lines: %d\nBlanks: %d\nTabs: %d\n", nl, bl, tb);
	return 0;
}
