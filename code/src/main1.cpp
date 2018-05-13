#include <functional>
#include <iterator>
#include <algorithm>
#include <vector>
#include <limits>
#include <cmath>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <chrono>
using namespace std;

int solution()
{

    return 0;
}

int main()
{

    chrono::high_resolution_clock clock;
    auto timepoint_b = clock.now();

    cout << solution() << endl;

    auto timepoint_e = clock.now();
    chrono::duration<double> duration_d = {timepoint_e - timepoint_b};
    cout << setprecision(9) << fixed << duration_d.count() << endl;
}

