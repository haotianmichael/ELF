#include <iostream>


/*
   1.定义迭代器类型
*/
struct input_iterator_tag {};  //输入迭代器
struct output_iterator_tag {}; //输出迭代器
struct forward_iterator_tag : public input_iterator_tag {};  //前向迭代器
struct bidirectional_iterator_tag : public forward_iterator_tag {}; // 双向迭代器
struct random_access_iterator_tag : public bidirectional_iterator_tag {};   //随机迭代器



/*
   2.定义迭代器
*/
//输入迭代器
template<typename  T, typename  Distance>
struct input_iterator{

    typedef input_iterator_tag iterator_category;   //返回类型
    typedef T  value_type;   //所指对象类型
    typedef Distance difference_type;  //迭代器之间距离类型 
    typedef T* pointer;  //操作结果类型
    typedef T& reference; //解引用操作结果类型
};


//输出迭代器
template<typename  T, typename Distance>
struct output_iterator{
    typedef output_iterator_tag iterator_category;
    typedef T value_type;
    typedef Distance difference_type;  
    typedef T* pointer;  
    typedef T& reference;
};

//前向迭代器
template<typename  T, typename Distance>
struct forward_iterator{

    typedef forward_iterator_tag iterator_category;
    typedef T value_type;
    typedef Distance difference_type;
    typedef T* pointer;
    typedef T& reference;
};

//双向迭代器
template<typename  T, typename  Distance>
struct bidirectional_iterator{
    
    typedef bidirectional_iterator_tag iterator_category;
    typedef T value_type;
    typedef Distance difference_type;
    typedef T* pointer;
    typedef T& reference;
};


//随机迭代器
template<typename T, typename Distance>
struct random_access_iterator{
    
    typedef random_access_iterator_tag iterator_category;
    typedef T value_type;
    typedef Distance difference_type;
    typedef T* pointer;
    typedef T& reference;
};


