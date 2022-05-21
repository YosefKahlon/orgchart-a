//
// Created by 97252 on 5/21/2022.
//

#ifndef ORGCHART_A_NODE_HPP
#define ORGCHART_A_NODE_HPP


#include <vector>
#include <string>

namespace ariel {
    class Node {
    private:
        std::vector<Node *> child;
        Node *parent;
        int size_;
        int degree;
        std::string title;

    public:
        Node(std::string &title_, int degree);

        std::string get_title() const;

        int get_degree() const ;
        friend std::ostream &operator<<(std::ostream &os, const Node &output);


        int size() const;

    };

}

#endif //ORGCHART_A_NODE_HPP
