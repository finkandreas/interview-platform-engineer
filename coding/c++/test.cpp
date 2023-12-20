#include <iostream>
#include <map>
#include <string>

void add_to_map(const std::map<int, std::string> in, std::map<int, std::string> out) {
    for (const auto& it : in) {
        out[it.first] = it.second;
    }
}

int main() {
    std::map<int, std::string> m1, m2;
    m1[0] = "a";
    m1[1] = "b";

    m2[0] = "0";

    add_to_map(m1, m2);

    for (const auto& it : m1) {
        if (m2.count(it.first) == 0) {
            std::cout << "Could not find key " << it.first << std::endl;
            return 1;
        }
        if (m2[it.first] != m1[it.first]) {
            std::cout << "The values for key=" << it.first << " are not the same." <<std::endl;
            return 1;
        }
    }
    std::cout << "m1 was addedd successfully to m2" << std::endl;
    return 0;
}
