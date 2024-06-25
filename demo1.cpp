// 函数绑定
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
class Add : public std::binary_function<int, int, void>
{
public:
    void operator()(int i, int j) const
    {
        std::cout << i << std::endl;
        std::cout << i + j << std::endl;
    }
};
void print(int i)
{
    std::cout << i << std::endl;
}
int main()
{
    std::vector<int> vec{1,2,3,4,5};

    std::for_each(vec.begin(), vec.end(), std::bind1st(Add(), 10));
    std::for_each(vec.begin(), vec.end(), print);

}