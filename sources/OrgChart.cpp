//
// Created by 97252 on 5/13/2022.
//

#include "OrgChart.hpp"

#include <utility>
#include "iostream"

using namespace ariel;


OrgChart::OrgChart() {
    this->root = nullptr;

}
OrgChart::~OrgChart() {
    delete root;
}



OrgChart &OrgChart::add_root(const string &root_) {

//    if (this->root == nullptr) {
//        this->root = new Node;
//    }
//
//    if (!this->find_title(root_)) {
//        this->exist.push_back(root_);
//        this->root->title = root_;
//    }
//
//    //this->root->parent = nullptr;

    return *this;

}

OrgChart &OrgChart::add_sub(const string &root_, const string& other) {

//    if (!find_title(root_)) {
//        throw std::invalid_argument("First argument is not exist !");
//    }

//    Node *child_ = new Node();
//    child_->title = other;
//    &(child_->parent = find_p_node(root_);
//    this->exist.push_back(other);
//
//    std::cout << (this)->find_p_node(root_).title << std::endl;

    //child_->parent->child.push_back(*child_);

    return *this;
}


std::ostream &ariel::operator<<(std::ostream &os, const OrgChart &output) {

//    os << output.root->title;
//    os << "\n";
    //os << output.root->child.at(0).title;

    return os;
}

OrgChart::level_order OrgChart::begin_level_order() {
    return OrgChart::level_order();
}

OrgChart::level_order OrgChart::end_level_order() {
    return OrgChart::level_order();
}

OrgChart::reverse_Order OrgChart::begin_reverse_order() {
    return OrgChart::reverse_Order();
}

OrgChart::reverse_Order OrgChart::reverse_order() {
    return OrgChart::reverse_Order();
}

OrgChart::pre_order OrgChart::begin_preorder() {
    return OrgChart::pre_order();
}

OrgChart::pre_order OrgChart::end_preorder() {
    return OrgChart::pre_order();
}

OrgChart::level_order OrgChart::begin() {
    return OrgChart::level_order();
}

OrgChart::level_order OrgChart::end() {
    return OrgChart::level_order();
}




