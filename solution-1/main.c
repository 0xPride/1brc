#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

typedef struct {
  char name[265];
  int32_t min;
  int32_t max;
  int32_t average;
} state_t;

void read_and_process_data(FILE *file) {
  // read data

  char *line = NULL;
  size_t count = 0;
  ssize_t nread = -1;

  while ((nread = getline(&line, &count, nread)) != -1) {
    free(line);
  }
}

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "expected two arguments\n");
    return 1;
  }
  FILE *file = fopen(argv[1], "r");
  if (!file) {
    fprintf(stderr, "cannot open file: %s\n", argv[1]);
    return 1;
  }
  printf("filename: %s", argv[1]);
  fclose(file);
}
