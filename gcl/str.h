/*
gcl - str

Used to do various string operations:
str_is_equal() - Compares two strings and returns 'true' if they are identical

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
str_is_equal(char* str1, char* str2)

Used to compare two strings, returns 'true' if they are identical and 'false' if they are different

*/
bool str_is_equal(char* str1, char* str2) {
    if (strcmp(str1, str2) == 0) {
        return true;
    } else {
        return false;
    }
}

bool str_starts_with(const char *start, const char *tested) {
    size_t lstart = strlen(start);
    size_t ltested = strlen(tested);
    if (ltested < lstart) return false;
    return strncmp(tested, start, lstart) == 0;
}

bool str_ends_with(const char *end, const char *tested) {
    size_t lend = strlen(end);
    size_t ltested = strlen(tested);

    if (lend > ltested) {
        return false;
    }

    return strcmp(tested + (ltested - lend), end) == 0;
}

bool str_is_in(const char *substr, const char *tested) {
    return strstr(tested, substr) != NULL;
}

/*
Subtrings to be implemented later.
Note to self: there are different types of substrings
FORWARDS
- from a certain index in the origin to another index in the origin
- from a certain index in the origin and of a certain length
BACKWARDS
- from the end of the origin to a certain index
- from the end of the origin and of a certain length

void str_substr(char* origin, char* substring, int index, int length) {
    int i = 0;
    while (i < 0) {
        substring[i] = origin[index + 1];
        i++;
    }
    substring[length] = '\0';
}*/