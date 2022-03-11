//
// Created by mfbut on 3/9/2022.
//

#include "Way.h"

bool Way::contains(unsigned int cpu_tag) {
  return tag == cpu_tag && valid;
}

void Way::update_age(int age_accessed) {
  if(age_accessed == age){
    age = 0;
  }else if(age < age_accessed){
    age += 1;
  }else{
    age = age;
  }
}

Way::Way(int starting_age) : tag(0), valid(false), dirty(false), age(starting_age), data(){

}
