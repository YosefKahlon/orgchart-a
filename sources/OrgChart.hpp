//
// Created by 97252 on 5/13/2022.
//

#ifndef ORGCHART_A_ORGCHART_HPP
#define ORGCHART_A_ORGCHART_HPP

#include <utility>
#include "vector"
#include "string"
#include "unordered_map"

using std::string;
namespace ariel {


    class OrgChart {

        //-------------------------Node-------------------------------
        class Node {
        public:
            std::vector<Node*> child;
            std::string title;
            Node *parent;
            int size_;
            int start;
            int degree;
            std::unordered_map<int,std::vector<Node*>>* mapppppppp;




        public:
            Node(/*std::string &title_ */) {
                this->parent = nullptr;
                this->start = 0;
             //   this->title = title_;


            }

            friend std::ostream &operator<<(std::ostream &os, const Node &output) {
                os << output.title ;

                return os;
            }

            int size() const {
                return this->size_;
            }

        };


        //-----------------------OrgChart---------------------------------
    public :

        Node *root;
        std::unordered_map<std::string ,Node> map;
        std::unordered_map<int,std::vector<Node*>> map_d;
        std::vector<Node*> v;
        OrgChart();
        ~OrgChart();

        OrgChart &add_root(const string &root_);
        OrgChart &add_sub(const string &root_, const string &other);

       // Node* find_Node(const string& name);



    public:
            //-------------------------------------------------------------------
            // iterator related code:
            // inner class and methods that return instances of it)
            //-------------------------------------------------------------------
        class level_order {

        private:
            Node *pointer_to_current_node;
           const  OrgChart &org;
          size_t index;

        public:

            // copy constructor
            level_order(const OrgChart &organization , Node * ptr = nullptr) :
            org(organization),
            pointer_to_current_node(ptr),
            index(0){}

            // Note that the method is const as this operator does not
            // allow changing of the iterator.
            const Node &operator*() const;
            const Node *operator->() const;
            Node &operator=(const Node &other);
            Node *operator&() const;


            // i++;
            // Usually iterators are passed by value and not by const& as they are small.
            level_order operator++(int);
            level_order& operator++() ;


            bool operator==(const level_order &) const ;
            bool operator!=(const level_order &) const ;

            std::string find_map(int degree);
        };


        level_order begin_level_order();
        level_order end_level_order();


    public:
        class reverse_Order {

        private:
            Node *pointer_to_current_node;
        public:
            // copy ;
            reverse_Order(Node *ptr = nullptr) : pointer_to_current_node(ptr) {}


            Node &operator*() const;
            Node *operator->() const;
            Node *operator=(Node &other) const;
            Node *operator&() const;

            // i++;
            // Usually iterators are passed by value and not by const& as they are small.
             reverse_Order operator++(int);
             reverse_Order operator++();
            bool operator==(const reverse_Order &) const;
            bool operator!=(const reverse_Order &) const;

        };

        reverse_Order begin_reverse_order();
        reverse_Order reverse_order();


    public:

        class pre_order {
        private:
            Node *pointer_to_current_node;

        public:
            // copy constructor
            pre_order(Node *ptr = nullptr) : pointer_to_current_node(ptr) {}

            Node &operator*() const;
            Node *operator->() const;
            Node *operator=(Node &other) const;
            Node *operator&() const;


            // i++;
            // Usually iterators are passed by value and not by const& as they are small.
             pre_order operator++(int);
             pre_order operator++();
            bool operator==(const pre_order &) const;
            bool operator!=(const pre_order &) const;

        };


        pre_order begin_preorder();
        pre_order end_preorder();


        friend std::ostream &operator<<(std::ostream &os, const OrgChart &output);

        level_order begin();
        level_order end() ;

        friend  class level_order;
        friend  class reverse_order;
        friend  class pre_order;

    };


}

#endif //ORGCHART_A_ORGCHART_HPP
