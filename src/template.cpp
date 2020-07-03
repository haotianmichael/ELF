#include <iostream>

using namespace std;



/*函数模板*/
template <typename T>
T add(const T lva, const T rva) {
    T a;
    a = lva + rva;
    return a;
}


/*类模板*/
template <class T>
class Myclass{
    T a;
    public:
        T add(const T lva, const T rva);

};
template <class T>
T Myclass<T>::add(const T lva, const T rva) {
    a = lva + rva;
    return a;
}



/*成员模板*/
template <class T> 
class MyclassB{
    public:
        T a;
        template <typename  type_1, typename  type_2>
            type_1 add(const type_1 lva, const type_2 rva);

};
template <class T>
template <typename  type_1, typename  type_2>
type_1 MyclassB<T>::add(const type_1 lva, const type_2 rva) {
    a = lva + rva;
    return a;
}




int main(void)
{
    
    return 0;
}
