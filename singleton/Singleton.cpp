#include "Singleton.h"

class Test
{
public:
    void func()
    {
        std::cout << "this is func" << std::endl;
    }
};

int main()
{
    Singleton<Test>::getInstance().func();
    return 0;
}