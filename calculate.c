#include <stdio.h>
#include <stdlib.h>

short int sum = 0;

void add(char character) {
	if (character >= 'a') {
		character -= ' ';
	}

	switch(character) {
		case 'A': sum +=  1; return;
		case 'L': sum +=  2; return;
		case 'W': sum +=  3; return;
		case 'H': sum +=  4; return;
		case 'S': sum +=  5; return;
		case 'D': sum +=  6; return;
		case 'O': sum +=  7; return;
		case 'Z': sum +=  8; return;
		case 'K': sum +=  9; return;
		case 'V': sum += 10; return;
		case 'G': sum += 11; return;
		case 'R': sum += 12; return;
		case 'C': sum += 13; return;
		case 'N': sum += 14; return;
		case 'Y': sum += 15; return;
		case 'J': sum += 16; return;
		case 'U': sum += 17; return;
		case 'F': sum += 18; return;
		case 'Q': sum += 19; return;
		case 'B': sum += 20; return;
		case 'M': sum += 21; return;
		case 'X': sum += 22; return;
		case 'I': sum += 23; return;
		case 'T': sum += 24; return;
		case 'E': sum += 25; return;
		case 'P': sum += 26; return;
	}
}

unsigned char main() {
	char *line = 0;
	size_t length;

	getline(&line, &length, stdin);

	for (unsigned char i = 0; line[i] != '\n'; i++) {
		add(line[i]);
	}

	printf("%d\n", sum);

	free(line);
}
