#include "iterator.h"




template<class InputIterator, class Distance>
void _advance(InputIterator &it, Distance n, input_iterator_tag) {

    assert(n >= 0);
    while(n -- ) { //当n>0  迭代器前移n位
        ++it; 
    }
}



template<class InputIterator, class Distance>
void advance(InputIterator &it, Distance n) {
    typedef typename iterator_traits<InputIterator>::iterator_category iterator_category;
    _advance(it, n, iterator_category());

}
