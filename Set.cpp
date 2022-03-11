//
// Created by mfbut on 3/9/2022.
//

#include "Set.h"

bool Set::contains(unsigned int cpu_tag) {
  for(const auto& way: ways){
    if(way.contains(cpu_tag))
    {
      return true;
    }
  }
  return false;
}

Way& Set::getOldestWay() {
  for(const auto& way: ways){
    if(way.age == ways.size() -1){
      return way;
    }
  }

}

Way& Set::get_matchingWay(unsigned int cpu_tag) {
  for(const auto& way: ways){
    if(way.tag ==cpu_tag){
      return way;
    }
  }
}

void Set::update_ages(unsigned int cpu_tag) {
  int accessed_age = get_matchingWay(cpu_tag).age;
  for(auto& way : ways){
    way.update_age(accessed_age);
  }
}

Set::Set(int num_ways): ways(num_ways) {}{
  for(int i = 0; i < num_ways; i++) {
    ways[i].age = i;
  }

}
