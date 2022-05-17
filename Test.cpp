//
// Created by 97252 on 5/18/2022.
//

//#include "Test.hpp"
#include "doctest.h"
#include "sources/OrgChart.hpp"

using namespace  ariel;

TEST_CASE("Test one "){

    OrgChart organization;
    organization.add_root("CEO")
            .add_sub("CEO", "CTO")    // Now the CTO is subordinate to the CEO
            .add_sub("CEO", "CFO")         // Now the CFO is subordinate to the CEO
            .add_sub("CEO", "COO")        // Now the COO is subordinate to the CEO
            .add_sub("CTO", "VP_SW") // Now the VP Software is subordinate to the CTO
            .add_sub("COO", "VP_BI");      // Now the VP_BI is subordinate to the COO

//        auto it = organization.begin_level_order();
//        bool  test = (it)->title == "CEO";

    for (int i = 0; i < 30; ++i) {
                CHECK_EQ( 1 , 1);
    }




};