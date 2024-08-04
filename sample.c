#include <stdio.h>
#include <stdlib.h>
#include <string.h>
                                
#define BUFSIZE 256
                                
// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) { 
      fprintf(stderr, "Please provide the address of a file as an input.\n");
      return -1;
    }
    char command1[1000] = {0};
    sprintf(command1, "userinfo -v \"%s\"", userName);
    system(command1);
}
