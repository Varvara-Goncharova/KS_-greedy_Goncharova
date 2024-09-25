#pragma once
#include "Parser.h"

class Solver {
 public:
  Answer Solution(const BackPack& back_pack) const;

 private:
  void Solution(const BackPack& back_pack, std::vector<bool>& taken, std::vector<bool>& max_taken, size_t& max_price,
                size_t& max_weight, size_t i, size_t current_weight, size_t current_price) const;
};