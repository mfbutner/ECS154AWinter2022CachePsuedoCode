//
// Created by mfbut on 3/9/2022.
//

#ifndef CACHEPROJECT_SET_H
#define CACHEPROJECT_SET_H

#include <vector>
#include "Way.h"

class Set {
  Set(int num_ways);
  bool contains(unsigned int cpu_tag);
  Way& getOldestWay();
  Way& get_matchingWay(unsigned int cpu_tag)
  void update_ages(unsigned int cpu_tag);

 private:
  std::vector<Way> ways;

};

#endif //CACHEPROJECT_SET_H
