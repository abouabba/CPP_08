# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

void print(int n) {
    std::cout << n << std::endl;
}

int main() {
    std::vector<int> v;
    std::vector<int>::iterator it;
    it = v.begin();
    
    v.push_back(42);
    
    std::cout << *it;
}