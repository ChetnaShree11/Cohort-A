#include <iostream>
#include <list>
#include <variant>
#include <string> // Include this for std::string
using namespace std;
int main() {
  // Define a variant that can hold a string or an int
  using VarType = std::variant<int, std::string>;
  list<VarType> l;
  // Populate the list with different types of values
  l.push_back("Sun");
  l.push_back(2);
  l.push_back(2);
  // Iterate over the list and handle the variant values
  for (const auto& elem : l) {
    std::visit([](const auto& arg) {
      std::cout << arg << " ";
    }, elem);
  }
  cout << endl;
  return 0;

}













