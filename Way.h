//
// Created by mfbut on 3/9/2022.
//

#ifndef CACHEPROJECT_WAY_H
#define CACHEPROJECT_WAY_H
#include <vector>
class Way {

 public:
  Way(const int starting_age);
  void update_age(int age_accessed);
  bool contains(unsigned int cpu_tag);

 private:
  unsigned int tag;
  bool valid, dirty;
  int age;
  std::vector<char> data;

};

#endif //CACHEPROJECT_WAY_H
