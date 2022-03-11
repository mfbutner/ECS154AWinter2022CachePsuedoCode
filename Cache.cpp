//
// Created by mfbut on 3/7/2022.
//

#include "Cache.h"

char Cache::read(unsigned int Address) {
  if(!contains(Address)){
    Way& oldest_way = sets[cpu_set].get_oldest_way();
    if(oldest_way.is_dirty){
      memory.write_block(oldest_way.block, oldest_way.tag + cpu_set);
      oldest_way.valid = true;
      oldest_way.dirty = false;
    }
    sets[cpu_set].update_ages(cpu_tag);
    return sets[cpu_set].get_matchingWay(cpu_tag)[cpu_offset];




  }
  return 0;
}

void Cache::write(char value, unsigned int Address) {
  if(!contains(Address)){
    Way& oldest_way = sets[cpu_set].get_oldest_way();
    if(oldest_way.is_dirty){
      memory.write_block(oldest_way.block, oldest_way.tag + cpu_set);
      oldest_way.valid = true;
      oldest_way.dirty = false;
    }
    sets[cpu_set].update_ages(cpu_tag);
    sets[cpu_set].get_matchingWay(cpu_tag)[cpu_offset] = value;
    sets[cpu_set].get_matchingWay(cpu_tag).dirty = true;

  }

  bool Cache::contains(unsigned int address) {
    return sets[cpu_set].contains(cpu_tag);
  }
/////
