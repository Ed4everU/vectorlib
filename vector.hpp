//
// Created by 孔明然 on 2022/6/7.
//

#ifndef VECTORLIB_VECTOR_HPP
#define VECTORLIB_VECTOR_HPP

#include <vector>

namespace cuMBPT {
    namespace math {

        template <class T>
        class vector3 {

        public:

            vector3(T num)
            {
                vec_[0] = num;
                vec_[1] = num;
                vec_[2] = num;
            }

            vector3(T *arr)
            {
                if (sizeof(arr)/sizeof(T)!=3) throw "more than 3";
                vec_[0] = arr[0];
                vec_[1] = arr[1];
                vec_[2] = arr[2];
                return vec_;
            }

            template<class inT>
            vector3& operator+(vector3<inT> vec3)
            {
                
            }


        private:

            T vec_[3];

        };
    }

}

#endif //VECTORLIB_VECTOR_HPP
