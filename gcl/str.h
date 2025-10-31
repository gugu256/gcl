/*
gcl - str

Used to do various string operations:
str_is_equal() - Compares two strings and returns 'true' if they are identical

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
str_is_equal(char* s1, char* s2)

Used to compare two strings, returns 'true' if they are identical and 'false' if they are different

*/
bool str_is_equal(char* s1, char* s2) {
    int ls1 = strlen(s1);
    int ls2 = strlen(s2);
    
    if (ls1 != ls2) {
        return false;
    }

    for (int i = 0; i < ls1; i++) {
        if (s1[i] == s2[i]) {
            continue;
        } else {
            return false;
        }
    }

    return true;

}