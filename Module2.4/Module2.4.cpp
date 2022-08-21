#include <iostream>  
#include <map>  
#include <unordered_map>  
#include <algorithm>
#include <set>

using namespace std;

bool isRed(std::unordered_map<std::string, std::string>::value_type Code) {
    return "#FF0000"== Code.second;
}

int main() {
    map<char, int> m = {
             {'a', 100},
             {'b', 200},
             {'c', 300},
             {'d', 400},
             {'e', 500},
    };

    auto it = m.find('c');

    cout << "Iterator points to " << it->first <<
        " = " << it->second << endl;

    std::unordered_map<std::string, std::string> u = {
        {"RED","#FF0000"},
        {"GREEN","#00FF00"},
        {"BLUE","#0000FF"}
    };

    //using function pointer to count odd number in the first half of the vector
    size_t oddCount = count_if(u.begin(), u.end(), isRed);
    cout << "Red numbers: " << oddCount << " found" << endl;

    std::set<int> collection{ 2, 3, 4, 5435345 };
    std::for_each(
        collection.begin(),
        collection.end(),
        [](int const& i) { std::cout << i << std::endl; }
    );

    return 0;
}