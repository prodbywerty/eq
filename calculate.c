// https://en.wikipedia.org/wiki/English_Qaballa

#include <stdio.h>
#include <stdlib.h>

int main() {
	char *line = 0;
	short int sum = 0;
	size_t length;

	getline(&line, &length, stdin);

	for (unsigned char i = 0; line[i] != '\n'; i++) {
		if (line[i] >= 'a') {
			line[i] -= ' ';
		}

		switch(line[i]) {
			case 'A': sum +=  1; break;
			case 'L': sum +=  2; break;
			case 'W': sum +=  3; break;
			case 'H': sum +=  4; break;
			case 'S': sum +=  5; break;
			case 'D': sum +=  6; break;
			case 'O': sum +=  7; break;
			case 'Z': sum +=  8; break;
			case 'K': sum +=  9; break;
			case 'V': sum += 10; break;
			case 'G': sum += 11; break;
			case 'R': sum += 12; break;
			case 'C': sum += 13; break;
			case 'N': sum += 14; break;
			case 'Y': sum += 15; break;
			case 'J': sum += 16; break;
			case 'U': sum += 17; break;
			case 'F': sum += 18; break;
			case 'Q': sum += 19; break;
			case 'B': sum += 20; break;
			case 'M': sum += 21; break;
			case 'X': sum += 22; break;
			case 'I': sum += 23; break;
			case 'T': sum += 24; break;
			case 'E': sum += 25; break;
			case 'P': sum += 26; break;
		}
	}

	printf("%d\n", sum);

	free(line);
}