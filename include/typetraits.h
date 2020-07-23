#ifndef  _TYPE_TRAITS_H
#define _TYPE_TRAITS_H

namespace STL{

    namespace {
        template<bool, class Ta, class Tb> 
            struct IfThenElse;

        template<class Ta, class Tb>
            struct IfThenElse<true, Ta, Tb> {
                using result = Ta; 
            };

        template<class Ta, class Tb>
            struct IfThenElse<false, Ta, Tb> {
                using result = Tb;
            };
    }


    struct _true_type {};
    struct _false_type {};


    template<class T>
        struct _type_traits{
         
        
        };


}

#endif
