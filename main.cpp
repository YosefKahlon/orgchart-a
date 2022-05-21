#include <iostream>


using namespace std;

#include "sources/OrgChart.hpp"
#include "sources/Node.hpp"
using namespace ariel;

int main() {

    OrgChart organization ;
    organization.add_root("ceo");

    auto it = organization.begin_level_order();
    cout << *it << endl;



    return 0;
}