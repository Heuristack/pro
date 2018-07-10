#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

auto print_message(string const & object = "", string const & content = "") -> void
{
    string message(200,0);
    snprintf(message.data(), message.size(),
            "%10s : %s", object.data(), content.data());
    cout << message << endl;
}

int main()
{}

