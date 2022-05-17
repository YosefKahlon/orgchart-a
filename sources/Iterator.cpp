//
// Created by 97252 on 5/16/2022.
//

#include "OrgChart.hpp"
#include "iostream"

using namespace ariel;

//---------------------------level_order---------------------------------
const OrgChart::Node &OrgChart::level_order::operator*() const {

    return *this->pointer_to_current_node;
}


OrgChart::Node &OrgChart::level_order::operator=(const OrgChart::Node &other) {
    return *this->pointer_to_current_node;
}

OrgChart::Node *OrgChart::level_order::operator&() const {
    return  this->pointer_to_current_node;
}

const OrgChart::Node *OrgChart::level_order::operator->() const {
    return (this->pointer_to_current_node);
}

OrgChart::level_order OrgChart::level_order::operator++(int) {
    return *this;
}



OrgChart::level_order &OrgChart::level_order::operator++() {


////    std::cout << "-------"<< this->pointer_to_current_node->degree << ", " << index <<std::endl;
//    if (index < this->org.map_d.at(this->pointer_to_current_node->degree).size()) {
//        this->pointer_to_current_node = this->org.map_d.at(this->pointer_to_current_node->degree).at(index);
//      //  std::cout << this->org.map_d.at(this->pointer_to_current_node->degree).at(index)->title << std:: endl;
//        index++;
//    } else {
//
//        index = 0;
//        this->pointer_to_current_node->degree++;
//        if ( find_map(this->pointer_to_current_node->degree) == "Element Present" && index < this->org.map_d.at(this->pointer_to_current_node->degree).size() ) {
//            this->pointer_to_current_node = this->org.map_d.at(this->pointer_to_current_node->degree).at(index);
//        //    std::cout << this->org.map_d.at(this->pointer_to_current_node->degree).at(index)->title << std:: endl;
//            index++;
//        }
//        else{
//            this->pointer_to_current_node = nullptr;
//        }
//    }



    return *this;

}


bool OrgChart::level_order::operator==(const OrgChart::level_order &other) const  {
    return this->pointer_to_current_node == other.pointer_to_current_node;
}

bool OrgChart::level_order::operator!=(const OrgChart::level_order &other) const  {
    return this->pointer_to_current_node != other.pointer_to_current_node;
}

std::string OrgChart::level_order::find_map(int degree) {
    if (this->org.map_d.find(degree) == this->org.map_d.end())
        return  "Element Not Present";
    else
        return "Element Present";
}


//----------------------------reverse_Order----------------------------------------
OrgChart::Node &OrgChart::reverse_Order::operator*() const {
    return *this->pointer_to_current_node;
}

OrgChart::Node *OrgChart::reverse_Order::operator->() const {
    return nullptr;
}

OrgChart::Node *OrgChart::reverse_Order::operator=(OrgChart::Node &other) const {
    return nullptr;
}

OrgChart::Node *OrgChart::reverse_Order::operator&() const {
    return nullptr;
}

OrgChart::reverse_Order OrgChart::reverse_Order::operator++(int) {
    return OrgChart::reverse_Order();
}

OrgChart::reverse_Order OrgChart::reverse_Order::operator++() {
    return OrgChart::reverse_Order();
}

bool OrgChart::reverse_Order::operator==(const OrgChart::reverse_Order &other) const {
    return this->pointer_to_current_node == other.pointer_to_current_node;
}

bool OrgChart::reverse_Order::operator!=(const OrgChart::reverse_Order &other) const {
    return this->pointer_to_current_node != other.pointer_to_current_node;


}
//----------------------------pre_order----------------------------------------

OrgChart::Node &OrgChart::pre_order::operator*() const {
    return *this->pointer_to_current_node;
}

OrgChart::Node *OrgChart::pre_order::operator->() const {
    return nullptr;
}

OrgChart::Node *OrgChart::pre_order::operator=(OrgChart::Node &other) const {
    return nullptr;
}

OrgChart::Node *OrgChart::pre_order::operator&() const {
    return nullptr;
}

OrgChart::pre_order OrgChart::pre_order::operator++(int) {
    return OrgChart::pre_order();
}

OrgChart::pre_order OrgChart::pre_order::operator++() {
    return OrgChart::pre_order();
}

bool OrgChart::pre_order::operator==(const OrgChart::pre_order &other) const {
    return this->pointer_to_current_node == other.pointer_to_current_node;
}

bool OrgChart::pre_order::operator!=(const OrgChart::pre_order &other) const {
    return this->pointer_to_current_node != other.pointer_to_current_node;
}
