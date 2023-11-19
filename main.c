#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "cs50.h"
int main() {
    char alphabet[26] ={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    string newAlphabet = get_string("Alfabeto: ");
    string text = get_string("Texto: ");
    char newText[strlen(text)];

    for (int i = 0; i < strlen(text); ++i) {
        char letter = toupper(text[i]);

        int index = 0;
        for (int j = 0; j < 26; ++j) {
            if(letter == alphabet[j]) {
                index = j;
            }
        }

        newText[i] = newAlphabet[index];
    }

    for (int i = 0; i < strlen(text); ++i) {
        printf("%c", newText[i]);
    }

    return 0;
}
