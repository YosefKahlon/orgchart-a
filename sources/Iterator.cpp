//
// Created by 97252 on 5/16/2022.
//

#include "OrgChart.hpp"
using namespace ariel;

////////////////////////////////////////////////////////////////////////////
OrgChart::Node &OrgChart::level_order::operator*() const {
    return *this->pointer_to_current_node;
}



OrgChart::Node *OrgChart::level_order::operator=(OrgChart::Node &other) const {
    return nullptr;
}

OrgChart::Node *OrgChart::level_order::operator&() const {
    return nullptr;
}

OrgChart::Node *OrgChart::level_order::operator->() const {
    return nullptr;
}

OrgChart::level_order OrgChart::level_order::operator++(int) {
    return OrgChart::level_order();
}

 OrgChart::level_order OrgChart::level_order::operator++() {
    return OrgChart::level_order();
}

bool OrgChart::level_order::operator==(const OrgChart::level_order &) {
    return false;
}

bool OrgChart::level_order::operator!=(const OrgChart::level_order &) {
    return false;
}




//////////////////////////////////////////////////////////////////////////////////
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

bool OrgChart::reverse_Order::operator==(const OrgChart::reverse_Order &) const {
    return false;
}

bool OrgChart::reverse_Order::operator!=(const OrgChart::reverse_Order &) const {
    return false;
}
///////////////////////////////////////////////////////////////////////////////////


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

bool OrgChart::pre_order::operator==(const OrgChart::pre_order &) const {
    return false;
}

bool OrgChart::pre_order::operator!=(const OrgChart::pre_order &) const {
    return false;
}
