#ifndef MAIN
#define MAIN

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

auto print_message(string const & object = "", string const & content = "") -> void
{
    string message(200,0);
    snprintf(message.data(), message.size(),
            "%9s: %s", object.data(), content.data());
    cout << message << endl;
}

template <typename T = double>
class scoped_timer
{
public:
    scoped_timer()
    {
        b = c.now();
    }

   ~scoped_timer()
    {
        e = c.now();
        d = e - b;
        stringstream s;
        s << setprecision(9) << fixed << d.count();
        print_message("time", s.str());
    }

private:
    chrono::high_resolution_clock c;
    chrono::duration<T> d;
    chrono::time_point<decltype(c),decltype(d)> b,e;
};


#endif

