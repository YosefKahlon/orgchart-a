//
// Created by 97252 on 5/13/2022.
//

#ifndef ORGCHART_A_ORGCHART_HPP
#define ORGCHART_A_ORGCHART_HPP

#include <utility>
#include <stack>
#include <algorithm>
#include <iostream>
#include "vector"
#include "string"
#include "unordered_map"

using std::string;
namespace ariel {


    class OrgChart {

        //-------------------------Node-------------------------------
        class Node {
        public:
            std::vector<Node *> child;
            Node *parent;
            int size_;
            int degree;


            Node(std::string &title_) {
                this->parent = nullptr;
                this->title = title_;
                this->size_ = 0;
                this->degree = 0;
            }

            friend std::ostream &operator<<(std::ostream &os, const Node &output) {

                if ((&output) != nullptr) {
                    os << output.title;
                    return os;
                }
                return os;
            }

            int size() const {
                return this->size_;
            }

            std::string title;
        };


        //-----------------------OrgChart---------------------------------
    private:

        Node *root;
        std::unordered_map<std::string, Node *> map;
        std::unordered_map<int, std::vector<Node *>> map_degree;

    public:
        OrgChart() : root(nullptr) {};

        OrgChart(const OrgChart &org);

        ~OrgChart() {

            delete root;
            for(auto x : map_degree){
                for (size_t i = 0; i < x.second.size(); ++i) {
                    delete  x.second.at(i);
                }

            }

        }

        OrgChart &operator=(OrgChart &&) noexcept;

        OrgChart(OrgChart &&org) noexcept;

        OrgChart &operator=(const OrgChart &other) noexcept;

        OrgChart &add_root(string root_);

        OrgChart &add_sub(const string &root_, string other);
//        OrgChart  &operator = (const OrgChart &other);
        // Node* find_Node(const string& name);



//    public:
        //-------------------------------------------------------------------
        // iterator related code:
        // inner class and methods that return instances of it)
        //-------------------------------------------------------------------
        class level_order {

        private:
            Node *pointer_to_current_node;
            const OrgChart &org;
            size_t index;

        public:

            // copy constructor
            level_order(const OrgChart &organization, Node *ptr) :
                    org(organization),
                    pointer_to_current_node(ptr),
                    index(1) {}

            // Note that the method is const as this operator does not
            // allow changing of the iterator.
            string &operator*();

            const Node *operator->() const;
            // level_order  &operator = (const level_order &other) = default;
            //  Node *operator&() const;


            // i++;
            // Usually iterators are passed by value and not by const& as they are small.
            level_order operator++(int);

            level_order &operator++();


            bool operator==(const level_order &) const;

            bool operator!=(const level_order &) const;

            std::string find_map(int degree);
        };


        level_order begin_level_order() const;

        level_order end_level_order() const;


//    public:
        class reverse_Order {

        private:
            Node *pointer_to_current_node;
            const OrgChart &org;
            int index;
            int de;

        public:

            // copy constructor
            reverse_Order(const OrgChart &organization, Node *ptr) :
                    org(organization),
                    pointer_to_current_node(ptr),
                    de(organization.map_degree.size() - 1),
                    index(1) {}


            // Note that the method is const as this operator does not
            // allow changing of the iterator.
            string &operator*();

            const Node *operator->() const;
            //    level_order  &operator = (const level_order &other) = default;
            //  Node *operator&() const;


            // i++;
            // Usually iterators are passed by value and not by const& as they are small.
            reverse_Order operator++(int);

            reverse_Order &operator++();


            bool operator==(const reverse_Order &) const;

            bool operator!=(const reverse_Order &) const;

        };

        reverse_Order begin_reverse_order() const;

        reverse_Order reverse_order() const;


//    public:

        class pre_order {
        private:
            Node *pointer_to_current_node;
            const OrgChart &org;
            size_t index;

            std::stack<Node *> stack;

        public:

            // copy constructor
            pre_order(const OrgChart &organization, Node *ptr) :
                    org(organization),
                    pointer_to_current_node(ptr),
                    index(0) {

                stack.push(nullptr);
                if (pointer_to_current_node != nullptr) {
                    stack.pop();
                    std::vector<Node *> preorder = this->pointer_to_current_node->child;

                    for (int i = preorder.size() - 1; i >= 0; i--) {
                        stack.push(preorder.at((unsigned long) i));

                    }

                }

            }

            // Note that the method is const as this operator does not
            // allow changing of the iterator.
            string &operator*();

            const Node *operator->() const;
            //    level_order  &operator = (const level_order &other) = default;
            //  Node *operator&() const;


            // i++;
            // Usually iterators are passed by value and not by const& as they are small.
            pre_order operator++(int);

            pre_order &operator++();


            bool operator==(const pre_order &) const;

            bool operator!=(const pre_order &) const;

        };


        pre_order begin_preorder() const;

        pre_order end_preorder() const;


        friend std::ostream &operator<<(std::ostream &os, const OrgChart &output);

        level_order begin() const;

        level_order end() const;
//        reverse_Order begin() const ;
//        reverse_Order end()  const ;
//        pre_order begin() const ;
//        pre_order end()  const ;

        friend class level_order;

        friend class reverse_order;

        friend class pre_order;

    };


}

#endif //ORGCHART_A_ORGCHART_HPP
