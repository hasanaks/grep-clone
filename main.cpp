#include <iostream>
#include <string_view>

static void find_pattern_in_file(std::string_view pattern, std::string_view file) {
  // TODO: implement find_pattern_in_file
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "usage: grep-clone PATTERN FILE\n";
    return 1;
  }

  const char* pattern = argv[1];
  const char* file = argv[2];

  find_pattern_in_file(pattern, file);
}
