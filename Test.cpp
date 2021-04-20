#include "doctest.h"
#include "NumberWithUnits.hpp"

using namespace ariel;
using namespace std;    

TEST_CASE("operators check for m,km ,cm units"){


        NumberWithUnits km(2, "km");
        NumberWithUnits m(200, "m");
        NumberWithUnits cm(20, "m");
        //------------------TESTS----------------//
        CHECK_EQ(km+m,NumberWithUnits(2.200,"km"));
        CHECK_EQ(km-m,NumberWithUnits(1800,"m"));
        CHECK_EQ(km-m+cm,NumberWithUnits(1820,"m"));
        CHECK_EQ(-km,NumberWithUnits(-3,"km"));
        CHECK_EQ(-m,NumberWithUnits(-200,"m"));
        CHECK_EQ(-cm,NumberWithUnits(-20,"cm"));
        CHECK_EQ(-km+-m,NumberWithUnits(-3.200,"km"));
        CHECK_EQ(-km+-+m+-cm,NumberWithUnits(-2780,"m"));
        CHECK_EQ(km--,NumberWithUnits(1,"km"));
}

TEST_CASE("operators check for min,sec,hour units"){

        NumberWithUnits h(2, "h");
        NumberWithUnits s(30, "s");
        NumberWithUnits m(20, "m");
        CHECK_EQ(s+s,NumberWithUnits(1,"m"));
        CHECK_EQ(6*m,NumberWithUnits(2,"h"));
        CHECK_EQ(s+m+h,NumberWithUnits(18000,"s"));
        CHECK_EQ(h-m,NumberWithUnits(100,"m"));
        CHECK_EQ(m--,NumberWithUnits(19,"m"));
}
TEST_CASE("operators check for gram,kilogram units"){
        NumberWithUnits kg(2, "kg");
        NumberWithUnits g(500, "g");

        CHECK_EQ(kg+g,NumberWithUnits(2.500,"kg"));
        CHECK_EQ(g-kg,NumberWithUnits(-1500,"g"));
        CHECK_EQ(g++,NumberWithUnits(501,"g"));
        CHECK_EQ(kg--,NumberWithUnits(1,"kg"));
}
TEST_CASE("some booleans checks"){
        NumberWithUnits h(2, "h");
        NumberWithUnits min(20, "min");
        CHECK_FALSE(min>h);
        CHECK_FALSE(!(4*min==h));
          
        NumberWithUnits kg(2, "kg");
        NumberWithUnits g(500, "g");
        CHECK_FALSE (g>kg);
        CHECK_FALSE (!(4*g<=kg));

        NumberWithUnits km(2, "km");
        NumberWithUnits m(200, "m");
        CHECK_FALSE (km>m);
        CHECK_FALSE (!(10*m<=km));
}
TEST_CASE("check throws due to wrong comperations"){
        NumberWithUnits h(2, "h");
        NumberWithUnits kg(2, "kg");
        NumberWithUnits km(2, "km");
        CHECK_THROWS(h+kg-km);
        CHECK_THROWS(h+kg);
        CHECK_THROWS(h-km);





        







        






        
}

       

