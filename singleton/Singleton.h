#include<iostream>

template<typename T> 
class Singleton
{
public:
    static T& getInstance()
    {
        static T instance;
        return instance;
    }

    Singleton(const Singleton &rhs) = delete;
    Singleton operator=(const Singleton &rhs) = delete;

private:
    Singleton() = default;
    ~Singleton() = default;
};
