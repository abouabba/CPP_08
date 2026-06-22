# include <algorithm>
# include <deque>
# include <iostream>
# include <vector>

int main() {
std::vector<int> y;
for (size_t i = 0; i < 33; i++)
{
    y.push_back(i);
    std::cout << "size : " << y.size() << std::endl;
    std::cout << "capacity : " << y.capacity() << std::endl;
    std::cout << "sizeof :" << sizeof(y) << std::endl;
}

}