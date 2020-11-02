#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <vector>

#include "image.h"
#include "image_processor.h"
#include "parser.h"

class Controller {
 public:
  Controller(char* file_name);

  bool parse(void);

  void count(void);

 private:
  Parser parser;
  std::vector<Image> images;
};

#endif
