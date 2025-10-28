/* 
gcl - file

Used to do various file operations including:
file_length() - Getting the length of a file (= number of characters in a file)
read_file() - Reading a file (=storing all the content of a file in a char* variable - can be a char[] array)

*/

#include <stdio.h>

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
void read_file(char* content, char filepath[2048])

Used to put all the contents of a file in a char-like variable
Example usage: 

int length_of_my_file = file_length("file.txt");
char content_of_my_file[length_of_my_file];
read_file(content_of_my_file, "file.txt");

The variable content_of_my_file now contains all the contents of the file

*/
void read_file(char* content, char filepath[2048]) {
  FILE* fp;
  fp = fopen(filepath, "r");
  if (fp == NULL) {
    printf("gcl/file read_file() error: Could not open file %s\n", filepath);
    return -1;
  }
  int flen = file_length(filepath);
  fp = fopen(filepath, "r");
  fread(content, 1, flen, fp);
  content[flen] = '\0';
  fclose(fp);
}