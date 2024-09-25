#pragma once
#include <vector>
#include <cstdint>
#include <iostream>

struct Item {
  uint64_t price;
  uint64_t weight;
};

struct BackPack {
  std::vector<Item> items;
  uint64_t max_weight;
};

struct Answer {
  std::vector<bool> items;
  uint64_t price;
  uint64_t max_weight;
  uint64_t weight;
};

class Parser {
 public:
  void Read(std::istream& stream, BackPack& backpack) const;
  void Write(std::ostream& stream, const Answer& answer) const;
};