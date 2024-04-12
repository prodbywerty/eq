#include <stdio.h>

int main() {
	int sum = 0;

	top:
	switch (getchar()) {
		default: goto top;
		case 'A': case 'a': sum +=  1; goto top;
		case 'L': case 'l': sum +=  2; goto top;
		case 'W': case 'w': sum +=  3; goto top;
		case 'H': case 'h': sum +=  4; goto top;
		case 'S': case 's': sum +=  5; goto top;
		case 'D': case 'd': sum +=  6; goto top;
		case 'O': case 'o': sum +=  7; goto top;
		case 'Z': case 'z': sum +=  8; goto top;
		case 'K': case 'k': sum +=  9; goto top;
		case 'V': case 'v': sum += 10; goto top;
		case 'G': case 'g': sum += 11; goto top;
		case 'R': case 'r': sum += 12; goto top;
		case 'C': case 'c': sum += 13; goto top;
		case 'N': case 'n': sum += 14; goto top;
		case 'Y': case 'y': sum += 15; goto top;
		case 'J': case 'j': sum += 16; goto top;
		case 'U': case 'u': sum += 17; goto top;
		case 'F': case 'f': sum += 18; goto top;
		case 'Q': case 'q': sum += 19; goto top;
		case 'B': case 'b': sum += 20; goto top;
		case 'M': case 'm': sum += 21; goto top;
		case 'X': case 'x': sum += 22; goto top;
		case 'I': case 'i': sum += 23; goto top;
		case 'T': case 't': sum += 24; goto top;
		case 'E': case 'e': sum += 25; goto top;
		case 'P': case 'p': sum += 26; goto top;
		case '\n': printf("%d\n", sum);
	}
}
