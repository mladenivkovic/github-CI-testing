#include <stdio.h>

/**
 * @file src/main.c
 * @brief a simple program that says hello world and writes some output to a file.
 */

int main(void){


  printf("Hello World! I'm working!\n");

  FILE *outfile_p;
  outfile_p = fopen("./output.txt", "w");
  fprintf(outfile_p, "PASSWORD\n");
  fclose(outfile_p);
}
