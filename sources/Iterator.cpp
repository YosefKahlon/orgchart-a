//
// Created by 97252 on 5/16/2022.
//

#include "OrgChart.hpp"
#include "iostream"

using namespace ariel;

//---------------------------level_order---------------------------------


string &OrgChart::level_order::operator*() {
    return (this->pointer_to_current_node->title);
}

const OrgChart::Node *OrgChart::level_order::operator->() const {
    return (this->pointer_to_current_node);
}


//OrgChart::Node *OrgChart::level_order::operator&() const {
//    return  this->pointer_to_current_node;
//}
//


OrgChart::level_order OrgChart::level_order::operator++(int) {
    auto it = *this;
    ++(*this);
    return it;
}


OrgChart::level_order &OrgChart::level_order::operator++() {


    //  std::cout << "-------"<< this->pointer_to_current_node->degree << ", " << index <<std::endl;
    if (index < this->org.map_degree.at(this->pointer_to_current_node->degree).size()) {

        this->pointer_to_current_node = this->org.map_degree.at(this->pointer_to_current_node->degree).at(index);
        //  std::cout << this->org.map_degree.at(this->pointer_to_current_node->degree).at(index)->title << std:: endl;
        index++;
    } else {

        index = 0;
        this->pointer_to_current_node->degree++;
        if (find_map(this->pointer_to_current_node->degree) == "Element Present" &&
            index < this->org.map_degree.at(this->pointer_to_current_node->degree).size()) {
            this->pointer_to_current_node = this->org.map_degree.at(this->pointer_to_current_node->degree).at(index);
            //   std::cout << this->org.map_degree.at(this->pointer_to_current_node->degree).at(index)->title << std:: endl;
            index++;
        } else {
            this->pointer_to_current_node = nullptr;
        }
    }


    return *this;

}


bool OrgChart::level_order::operator==(const OrgChart::level_order &other) const {
    return this->pointer_to_current_node == other.pointer_to_current_node;
}

bool OrgChart::level_order::operator!=(const OrgChart::level_order &other) const {
    return this->pointer_to_current_node != other.pointer_to_current_node;
}

std::string OrgChart::level_order::find_map(int degree) {
    if (this->org.map_degree.find(degree) == this->org.map_degree.end())
        return "Element Not Present";
    else
        return "Element Present";
}


//----------------------------reverse_Order----------------------------------------
string &OrgChart::reverse_Order::operator*() {
    return (this->pointer_to_current_node->title);


}

const OrgChart::Node *OrgChart::reverse_Order::operator->() const {
    return this->pointer_to_current_node;
}

OrgChart::reverse_Order OrgChart::reverse_Order::operator++(int) {
    auto copy = *this;
    ++(*this);
    return copy;
}

OrgChart::reverse_Order &OrgChart::reverse_Order::operator++() {
    if (index < this->org.map_degree.at(this->de).size()) {
        this->pointer_to_current_node = this->org.map_degree.at(this->de).at((unsigned long) index);

        index++;
    } else {
        this->de--;
        if (this->de >= 0) {
            //  std::cout << "-------" << this->de << ", " << index << std::endl;
            index = 0;
            //   std::cout << "-------" << this->de << ", " << index << std::endl;
            if (this->org.map_degree.find(this->de) != this->org.map_degree.end() &&
                index < this->org.map_degree.at(this->de).size()) {
                this->pointer_to_current_node = this->org.map_degree.at(this->de).at((unsigned long) index);
                //   std::cout << this->org.map_degree.at(this->de).at(index)->title << std::endl;
                index++;
            } else {
                this->pointer_to_current_node = nullptr;
            }

        } else {
            this->pointer_to_current_node = nullptr;
        }
    }
    return *this;
}

bool OrgChart::reverse_Order::operator==(const OrgChart::reverse_Order &other) const {
    return this->pointer_to_current_node == other.pointer_to_current_node;
}

bool OrgChart::reverse_Order::operator!=(const OrgChart::reverse_Order &other) const {
    return this->pointer_to_current_node != other.pointer_to_current_node;
}


//----------------------------pre_order----------------------------------------

string &OrgChart::pre_order::operator*() {
    return this->pointer_to_current_node->title;
}

const OrgChart::Node *OrgChart::pre_order::operator->() const {
    return this->pointer_to_current_node;
}

OrgChart::pre_order OrgChart::pre_order::operator++(int) {
    auto copy = *this;
    ++(*this);
    return copy;
}

OrgChart::pre_order &OrgChart::pre_order::operator++() {


    if (!stack.empty()) {
        this->pointer_to_current_node = this->stack.top();
        this->stack.pop();

        if (this->pointer_to_current_node != nullptr) {
            //
            std::vector<Node *> preorder = this->pointer_to_current_node->child;
            for (int i = preorder.size() - 1; i >= 0; i--) {

                stack.push(preorder.at((unsigned long) i));
            }
        }
    } else {
        this->pointer_to_current_node = nullptr;
    }
    return *this;
}

bool OrgChart::pre_order::operator==(const OrgChart::pre_order &other) const {
    return this->pointer_to_current_node == other.pointer_to_current_node;
}

bool OrgChart::pre_order::operator!=(const OrgChart::pre_order &other) const {
    return this->pointer_to_current_node != other.pointer_to_current_node;
}

