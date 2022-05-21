//
// Created by 97252 on 5/21/2022.
//

#include "Node.hpp"

using namespace ariel;

Node::Node(std::string &title_, int degree_) {
    this->parent = nullptr;
    this->title = title_;
    this->degree = degree_;
    this->size_ = 0;
}

int Node::size() const {
 return this->size_;
}


std::string Node::get_title() const {
    return this->title;
}

 std::ostream &operator<<(std::ostream &os, const Node &output){
     if ((&output) != nullptr) {
                    os << output.get_title();
                    return os;
                }
                return os;
}

int Node::get_degree() const  {
    return this->degree;
}
