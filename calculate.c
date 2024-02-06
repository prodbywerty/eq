#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *line = 0;
	unsigned char sum = 0;
	size_t length;

	getline(&line, &length, stdin);

	for (unsigned char i = 0; line[i] != '\n'; i++) {
		switch(line[i]) {
			case 'a':
			case 'j':
			case 's':
			case 'A':
			case 'J':
			case 'S':
				sum += 1;
				break;
			case 'b':
			case 'k':
			case 't':
			case 'B':
			case 'K':
			case 'T':
				sum += 2;
				break;
			case 'c':
			case 'l':
			case 'u':
			case 'C':
			case 'L':
			case 'U':
				sum += 3;
				break;
			case 'd':
			case 'm':
			case 'v':
			case 'D':
			case 'M':
			case 'V':
				sum += 4;
				break;
			case 'e':
			case 'n':
			case 'w':
			case 'E':
			case 'N':
			case 'W':
				sum += 5;
				break;
			case 'f':
			case 'o':
			case 'x':
			case 'F':
			case 'O':
			case 'X':
				sum += 6;
				break;
			case 'g':
			case 'p':
			case 'y':
			case 'G':
			case 'P':
			case 'Y':
				sum += 7;
				break;
			case 'h':
			case 'q':
			case 'z':
			case 'H':
			case 'Q':
			case 'Z':
				sum += 8;
				break;
			case 'i':
			case 'r':
			case 'I':
			case 'R':
				sum += 9;
				break;
		}
	}

	if (sum > 9 && sum != 11 && sum != 22 && sum != 33) {
		sum = sum / 10 + sum % 10;
	}

	printf("%d\n", sum);

	free(line);
}