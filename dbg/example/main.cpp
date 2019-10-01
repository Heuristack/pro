#include <vector>
#include "dbg.h"

int factorial(int n)
{
    if (dbg(n <= 1)) return dbg(1);
    return dbg(n * factorial(n-1));
}

int main()
{
  std::string message = "Hello,World!";
  dbg(message);

  int const a = 2;
  int const b = dbg(3 * a) + 1;

  std::vector<int> numbers{a,b,42};
  dbg(numbers);

  dbg("this line is executed");

  factorial(4);
}

