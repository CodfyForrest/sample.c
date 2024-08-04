#include <stdio.h>
#include <stdlib.h>
#include <string.h>
                                
#define BUFSIZE 256
                                
int main(int argc, char** argv) {
  char *userName = argv[2];
  
  {
    // GOOD: the user string is encoded by a library routine.
    char userNameQuoted[1000] = {0};
    encodeShellString(userNameQuoted, 1000, userName); 
    char command2[1000] = {0};
    sprintf(command2, "userinfo -v %s", userNameQuoted);
    system(command2);
  }
}
