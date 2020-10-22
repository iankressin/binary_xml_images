#include <stdio.h>
#include <string.h>
#include <fstream>
#include "include/parser.h"
#include <stdexcept>

using namespace std;
static char BASE_PATH[] = "assets/";

int main (int argc, char *argv[]) {
  char * file_name = argv[1];
  char * full_path = strcat(BASE_PATH, file_name);
  ifstream file(full_path);

  if(!file.is_open()) {
    printf("ERROR: Unable to open file %s", full_path);
    exit(1);
  }

  Parser parser(file);

  bool valid = parser.parse_file();

  if (!valid) printf("Not valid");
  else printf("Valid");

  return 0;
}