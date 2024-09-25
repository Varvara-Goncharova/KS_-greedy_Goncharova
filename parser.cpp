#include "Parser.h"
#include <algorithm>
#include <cstddef>

void Parser::Read(std::istream& stream, BackPack& backpack) const {
  size_t amount;
  stream >> amount;
  stream >> backpack.max_weight;
  backpack.items.resize(amount);
  for (size_t i = 0; i < amount; ++i) {
    stream >> backpack.items[i].price >> backpack.items[i].weight;
  }
}

void Parser::Write(std::ostream& stream, const Answer& answer) const {
  stream << answer.price << " " << answer.max_weight - answer.weight << std::endl;
  for (size_t i = 0; i < answer.items.size(); ++i) {
    if (answer.items[i]) {
      stream << 1 << " ";
    } else {
      stream << 0 << " ";
    }
  }
}