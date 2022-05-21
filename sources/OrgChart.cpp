//
// Created by 97252 on 5/13/2022.
//

#include "OrgChart.hpp"

#include <utility>
#include <algorithm>
#include "iostream"

using namespace ariel;


//OrgChart::OrgChart(): (nullptr){
//    this->root = nullptr;
//
//}

//OrgChart::~OrgChart() {
//    std::for_each(this->map.begin(), this->map.end(), [](auto& p){  delete p.second;});
//    this->map.clear();
//}

OrgChart &OrgChart::add_root(string root_) {

    if (this->root == nullptr) {

        this->root =  new Node(root_);
        this->map.insert({root_, *this->root});
        this->root->degree = 0;
        this->map_degree.insert({0, {this->root}});
        this->root->parent = nullptr;
        this->root->size_ = root_.length();
    }


    return *this;

}


OrgChart &OrgChart::add_sub(const string &root_, string other) {

    if (this->map.find(root_) == this->map.end()) {
        throw std::invalid_argument("First argument is not exist !");
    }

    for (size_t i = 0; i < this->map.at(root_).child.size() ; ++i) {
        if ( this->map.at(root_).child.at(i)->title == other ){
            throw std::invalid_argument("add same name child ");
        }
    }

    Node *child_ = new Node(other);
    child_->degree = this->map.at(root_).degree + 1;
    child_->parent = &(this->map.at(root_));
    child_->size_ = other.length();

    this->map.at(root_).child.push_back(child_);

    this->map.insert({other, *child_});


    if (map_degree.find(child_->degree) == map_degree.end()) {
        std::vector<Node *> v;
        v.push_back(child_);
        this->map_degree.insert({child_->degree, v});
    } else {

        this->map_degree.at(child_->degree).push_back(child_);

    }



    return *this;
}


std::ostream &ariel::operator<<(std::ostream &os, const OrgChart &output) {


    os << "----- \n";

    for (auto &x: output.map_degree) {
        for (size_t i = 0; i < output.map_degree.at(x.first).size(); ++i) {
            os << output.map_degree.at(x.first).at(i)->title << ", ";
        }
        os << "\n-----\n";
    }



    return os;
}

OrgChart::level_order OrgChart::begin_level_order() const {
    return level_order{*this, this->root};
}

OrgChart::level_order OrgChart::end_level_order() const {
    auto it = level_order(<#initializer#>, nullptr);

    return it;

}




OrgChart::level_order OrgChart::begin() const {
    return level_order{*this, this->root};
}


//no need to check the end
OrgChart::level_order OrgChart::end() const {
    auto it = level_order(<#initializer#>, nullptr);
    return it;
}

OrgChart::reverse_Order OrgChart::begin_reverse_order() const {
    return OrgChart::reverse_Order(ariel::OrgChart(), nullptr);
}

OrgChart::reverse_Order OrgChart::reverse_order() const {
    return OrgChart::reverse_Order(ariel::OrgChart(), nullptr);
}

OrgChart::pre_order OrgChart::begin_preorder() const {
    return OrgChart::pre_order(ariel::OrgChart(), nullptr);
}

OrgChart::pre_order OrgChart::end_preorder() const {
    return OrgChart::pre_order(ariel::OrgChart(), nullptr);
}
//
//OrgChart &OrgChart::operator=(OrgChart && other) noexcept {
//    // Guard self assignment
//    if (this == &other) {
//        return *this;}
//    return *this;
//}
//
//OrgChart &OrgChart::operator=(const OrgChart &other) noexcept {
//    if (this == &other) {
//        return *this;}
//    return *this;
//}
//
//OrgChart::OrgChart(OrgChart &&org) noexcept {
//    return;
//}

//OrgChart::OrgChart(OrgChart &&other) noexcept {
//    if (this == &other)
//        return OrgChart::OrgChart(); //
//}


