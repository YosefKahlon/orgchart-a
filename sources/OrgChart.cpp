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


//OrgChart::Node *OrgChart::find_Node(const std::string& name) {
//    if (  this->map.find(name) == this->map.end() )
//        return this.
//    else
//        std::cout << got->first << " is " << got->second;
//
//    std::cout << std::endl;
//}


OrgChart &OrgChart::add_root(const string &root_) {

    if (this->root == nullptr) {
        this->root = new Node;
        this->root->title = root_;
        this->map.insert({root_,*this->root});
    }

//    if (!this->find_title(root_)) {
//        this->exist.push_back(root_);
//        this->root->title = root_;
//    }
    this->root->degree = 0;
    std::vector<Node*> level;
    level.push_back(this->root);
    this->map_d.insert({0,level});
    v.push_back(root);
    this->root->parent = nullptr;

    return *this;

}


OrgChart &OrgChart::add_sub(const string &root_, const string &other) {

    Node *child_ = new Node();
    child_->title = other;
    child_->degree = this->map.at(root_).degree+1;
    child_->parent = &(this->map.at(root_));


    this->map.at(root_).child.push_back(child_);
    this->map.insert({other,*child_});

    this->map_d.insert({child_->degree,child_->parent->child});

    v.push_back(child_);

//    if (!find_title(root_)) {
//        throw std::invalid_argument("First argument is not exist !");
//    }

    return *this;
}


std::ostream &ariel::operator<<(std::ostream &os, const OrgChart &output) {

//    os << output.root->title;
//    os << "\n  ----- \n";
//    os << "---------|";
//    for (size_t i = 0; i < output.root->child.size(); ++i) {
//        os << output.root->child.at(i)->title;
//        os << "---------|";
//    }

//    os << output.map.at(output.root->title);
//
//    os << "," <<output.map.at(output.root->title).child.at(0)->title;
//

    for (const auto& pair: output.map) {
        os << pair.first;
        os << "\n";
    }


    return os;
}

OrgChart::level_order OrgChart::begin_level_order() {
    return level_order{*this};
}

OrgChart::level_order OrgChart::end_level_order() {
    auto it = level_order(OrgChart());

    return it;
   // return level_order{OrgChart()};
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
    return  level_order{*this};
}


//no need to check the end
OrgChart::level_order OrgChart::end() {
    return level_order{OrgChart()};
}





