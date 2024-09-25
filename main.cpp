#include "Parser.h"
#include "Solver.h"
#include <iostream>
#include <string>
#include <fstream>

int main() {
  std::string input;
  std::string output;
  std::cin >> input >> output;
  std::ifstream fin(input.c_str());
  std::ofstream fout(output.c_str());
  BackPack back_pack;
  Parser parser;
  parser.Read(fin, back_pack);
  auto answer = Solver().Solution(back_pack);
  parser.Write(fout, answer);
  fin.close();
  fout.close();
}