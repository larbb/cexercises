#include <stdio.h>

int main()
{
int c, pc; /* c = character, pc = previous character */

/* set pc to a value that wouldn't match any characters, in case this program is ever modifieed to get rid of multiplies of other than characters. */

pc = EOF;

while ((c = getchar()) != EOF) {
	if (pc == ' ') /* or if (pc != c) */
		putchar(c);

	/* we haven't met the 'else' statement yet, so we have to use an if */
	if (c != ' ') 
		putchar(c);
	pc = c;
    }
    return 0;
}
