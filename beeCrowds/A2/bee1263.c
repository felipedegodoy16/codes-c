// 974006 - 107399 - Alessander Pereira de Luna
// 973973 - 116760 - Diego Luiz Machado
// 973982 - 117285 - Felipe Ricardo Pires de Godoy
// 974011 - 116545 - Lincon Samuel de Andrade
// 974032 - 117595 - Pedro Gomes
// 974061 - 116324 - Rafael Rodrigues de Albuquerque
// 974023 - 117245 - Vinicius Senna

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char line[6001];
    char *curr, *prev, letter;
    int length, alliterations;

    while (fgets(line, 6001, stdin)) {
        alliterations = 0;
        length = 0;
        letter = '\0';
        curr = line;
        prev = NULL;

        while (*curr != '\n') {
            if (!prev || *prev == ' ' && *curr != ' ') {
                if (letter == tolower(*curr))
                    ++length;
                else {
                    if (length > 1)
                        ++alliterations;

                    length = 1;
                    letter = tolower(*curr);
                }
            }
            prev = curr;
            ++curr;
        }
        if (length > 1)
            ++alliterations;

        printf("%d\n", alliterations);
    }

    return 0;
}