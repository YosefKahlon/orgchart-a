//
// Created by 97252 on 5/13/2022.
//

#ifndef ORGCHART_A_ORGCHART_HPP
#define ORGCHART_A_ORGCHART_HPP

#include "string"
using std::string;
namespace ariel {


    class OrgChart {
    public:
        OrgChart& add_root(string root);


        OrgChart& add_sub(string root, string other);


//    public:
//
//        class iterator {
//
////            string &operator*() const {
////
////                return s;
////            }
//
//            string* operator ->()const{
//                string s;
//                return &(s);
//            }
//
//            //++i
//            iterator& operator++(){
//                 iterator temp = *this;
//                return temp;
//            }
//            // i++;
//            // Usually iterators are passed by value and not by const& as they are small.
//            const iterator operator++(int) {
//                iterator tmp= *this;
//                return tmp;
//            }
//
//
////       need ? ->  iterator operator =(){
////
////            }
//
//            bool operator ==(const iterator& ) const{
//                return true;
//            }
//
//            bool operator !=(const iterator& ) const{
//                return false;
//            }
//
//
//        };
//
//
//        iterator begin_level_order();
//
//        iterator end_level_order();
//
//        iterator begin_reverse_order();
//
//        iterator end_reverse_order();
//
//
//        iterator begin_preorder();
//
//        iterator end_preorder();
//
//
//       friend std::ostream &operator<<(std::ostream &os, const OrgChart &output);


    };



}

#endif //ORGCHART_A_ORGCHART_HPP
