#ifndef MAIN0
#define MAIN0

#include <iostream>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <forward_list>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <iterator>
#include <functional>
#include <algorithm>
#include <limits>
#include <cmath>
#include <numeric>
#include <random>
#include <istream>
#include <ostream>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <utility>
#include <exception>

using namespace std;

template <typename T = double>
class ScopeTimer
{
public:
    ScopeTimer()
    {
        b = c.now();
    }

   ~ScopeTimer()
    {
        e = c.now();
        d = e - b;
        cout << setprecision(9) << fixed << d.count() << endl;
    }

private:
    chrono::high_resolution_clock c;
    chrono::duration<T> d;
    chrono::time_point<decltype(c),decltype(d)> b,e;
};

#endif

