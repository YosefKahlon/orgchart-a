//
// Created by 97252 on 5/13/2022.
//

#ifndef ORGCHART_A_ORGCHART_HPP
#define ORGCHART_A_ORGCHART_HPP

#include <utility>
#include "vector"
#include "string"
#include "unordered_map"
#include "Node.hpp"

using std::string;
namespace ariel {


    class OrgChart {

    private:

        Node *root;
        std::unordered_map<std::string, Node> map;
        std::unordered_map<int, std::vector<Node *>> map_degree;

    public:
        OrgChart() : root(nullptr) {};

        OrgChart(const OrgChart &org);

        ~OrgChart();
//        OrgChart& operator=(OrgChart&&) noexcept;
//        OrgChart(OrgChart&& org) noexcept;
//        OrgChart& operator=( const OrgChart& other) noexcept;

        OrgChart &add_root(string root_);

        OrgChart &add_sub(const string &root_, string other);
        // OrgChart  &operator = (const OrgChart &other);
        // Node* find_Node(const string& name);




        class Iterator {
        private:
            Node *pointer_to_current_node;
            const OrgChart &org;
            size_t index;


        public:

            Iterator(const OrgChart &organization, Node *ptr) :
                    org(organization),
                    pointer_to_current_node(ptr),
                    index(1) {}


            const Node *operator->() const;

            bool operator==(const Iterator &) const;

            bool operator!=(const Iterator &) const;

            //   std::string find_map(int degree);

            string &operator*();
        };


        class level_order : Iterator {

        public:

            level_order(const OrgChart &organization, Node *ptr) : Iterator(organization, ptr) {}

            level_order operator++(int);

            level_order &operator++();

            //   std::string find_map(int degree);
        };


        level_order begin_level_order() const;

        level_order end_level_order() const;

        class reverse_Order : Iterator {

        public:
            reverse_Order operator++(int);

            reverse_Order &operator++();
        };

        reverse_Order begin_reverse_order() const;

        reverse_Order reverse_order() const;

        class pre_order : Iterator {
        public:
            pre_order operator++(int);

            pre_order &operator++();
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
