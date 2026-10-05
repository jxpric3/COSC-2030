#include <iostream>> 
#include <string> 

using namespace std;

template <typename T> 
T minimum(T a, T b)
{
    if(a < b)
    {
        return a; 
    }
    else
    {
        return b; 
    }

}

template <typename T> 
T maximum(T a, T b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b; 
    }
}

int main()
{
    return 0; 
}