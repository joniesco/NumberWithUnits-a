#include "NumberWithUnits.hpp"
using namespace std;

namespace ariel {
     NumberWithUnits operator+(const NumberWithUnits& n1, const NumberWithUnits& n2) {
        return NumberWithUnits();
    }
    NumberWithUnits operator+(const NumberWithUnits& n, double a) {
        return NumberWithUnits();
    }
    // NumberWithUnits operator+=(NumberWithUnits& n1, const NumberWithUnits& n2) {
    //             return NumberWithUnits();

    // }
    NumberWithUnits operator-(const NumberWithUnits& n1, const NumberWithUnits& n2) {
               return NumberWithUnits();

    }
    NumberWithUnits operator-(const NumberWithUnits& n) {
                return NumberWithUnits();

    }
    NumberWithUnits operator-=(NumberWithUnits& n1, const NumberWithUnits& n2) {
                return NumberWithUnits();

    }
    NumberWithUnits operator++(NumberWithUnits& n) {
        return NumberWithUnits();
    }
    NumberWithUnits operator++(NumberWithUnits& n, int a) {
        return NumberWithUnits();
    }
    NumberWithUnits operator--(NumberWithUnits& n) {
        return NumberWithUnits();
    }
    NumberWithUnits operator--(NumberWithUnits& n, int a) {
        return NumberWithUnits();
    }
 NumberWithUnits operator*(NumberWithUnits& n, double num) {
        return NumberWithUnits();
    }
    NumberWithUnits operator*(double num, NumberWithUnits& n) {
        return NumberWithUnits();
    }
    NumberWithUnits operator*=(NumberWithUnits& n, double num) {
        return NumberWithUnits();
    }
    NumberWithUnits operator*=(double num, NumberWithUnits& n) {
        return NumberWithUnits();
    }
        void NumberWithUnits::read_units(ifstream& units_file){
        }
         bool operator>(const NumberWithUnits& n1, const NumberWithUnits& n2){
        return true;
    }
    bool operator>=(const NumberWithUnits& n1, const NumberWithUnits& n2){
        return true;
    }
    bool operator<(const NumberWithUnits& n1, const NumberWithUnits& n2){
        return true;
    }
    bool operator<=(const NumberWithUnits& n1, const NumberWithUnits& n2){
        return true;
    }
    bool operator==(const NumberWithUnits& n1, const NumberWithUnits& n2){
        return true;
    }
    bool operator!=(const NumberWithUnits& n1, const NumberWithUnits& n2){
        return true;
    }
     std::ostream& operator <<	(std::ostream &os, const NumberWithUnits &f){
         return os;
    }
		 std::istream& operator >>	(std::istream &is, NumberWithUnits &f){
             return is;

        }
        NumberWithUnits NumberWithUnits::operator-() {
            return NumberWithUnits();

        }
        NumberWithUnits NumberWithUnits::operator+() {
                        return NumberWithUnits();


        }
                 bool NumberWithUnits::operator == (const NumberWithUnits &f) const{
                     return true;
                 }
		 NumberWithUnits NumberWithUnits::operator += (const NumberWithUnits& n1){
            return NumberWithUnits();
        }


}
