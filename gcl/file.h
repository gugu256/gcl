/* 
gcl - file

Used to do various file operations including:
file_length() - Getting the length of a file (= number of characters in a file)
file_read() - Reading a file (=storing all the content of a file in a char* variable - can be a char[] array)
file_write() - Writing in a file

*/

#include <stdio.h>
#include <string.h>

/*
file_length(char* filepath)

Used to get the length of a file (number of characters in a file)
Example usage: 

int length_of_my_file = file_length("file.txt");

*/
int file_length(char* filepath) {
    FILE* fp;
    int count = 0;
    char c;
    fp = fopen(filepath, "r");
    if (fp == NULL) {
        printf("gcl/file file_length() error: Could not open file %s", filepath);
    return -1;
    }

    for (c = getc(fp); c != EOF; c = getc(fp)) {
        count++;
    }
  
    fclose(fp);
    return count;
}

/*
file_read(char* content, char filepath[2048])

Used to put all the contents of a file in a char-like variable
Example usage: 

int length_of_my_file = file_length("file.txt");
char content_of_my_file[length_of_my_file];
file_read(content_of_my_file, "file.txt");

The variable content_of_my_file now contains all the contents of the file

*/
int file_read(char* content, char filepath[2048]) {
    FILE* fp;
    fp = fopen(filepath, "r");
    if (fp == NULL) {
        printf("gcl/file file_read() error: Could not open file %s\n", filepath);
        return -1;
    }
    int flen = file_length(filepath);
    fp = fopen(filepath, "r");
    fread(content, 1, flen, fp);
    content[flen] = '\0';
    fclose(fp);
    return 0;
}

/*
file_write(char* content, char filepath[2048])

Used to write in a file.
Example usage:

char my_text[] = "C is the best programming language ever!\n\nI use Arch, btw.";
file_write(my_text, "my_humble_opinion.txt");

*/
int file_write(char* content, char filepath[2048]) {
    FILE* fp;
    int content_length = strlen(content);
    fp = fopen(filepath, "w");
    fwrite(content, 1, content_length, fp);
    fclose(fp);
    return 0;
}