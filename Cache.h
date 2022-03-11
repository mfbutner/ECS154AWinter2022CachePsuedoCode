//
// Created by mfbut on 3/7/2022.
//

#ifndef CACHEPROJECT_CACHE_H
#define CACHEPROJECT_CACHE_H
#include <vector>
class Cache {
 public:
  char read(unsigned int Address);
  void write(char value, unsigned int Address);

 private:
  std::vector<Set> sets;

  bool contains(unsigned int address);
};

#endif //CACHEPROJECT_CACHE_H
