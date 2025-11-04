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
    int lstr1 = strlen(str1);
    int lstr2 = strlen(str2);
    
    if (lstr1 != lstr2) {
        return false;
    }

    for (int i = 0; i < lstr1; i++) {
        if (str1[i] == str2[i]) {
            continue;
        } else {
            return false;
        }
    }

    return true;

}

bool str_starts_with(char* start, char* tested) {
    int lstart = strlen(start);
    
    if (lstart > strlen(tested)) {
        return false;
    }

    char tested_dest[lstart];
    int i = 0;
    for (int i = 0; i < lstart; i++) {
        tested_dest[i] = tested[i];
    }
    
    if (str_is_equal(start, tested_dest)) {
        return true;
    } else {

        return false;
    }

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