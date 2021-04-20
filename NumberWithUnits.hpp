#include <string>
using namespace std;
namespace ariel {
    class NumberWithUnits {

    private:
     double size;
	 string unit;
    public:
        NumberWithUnits(const double size,const string unit) {
			this->size=size;
			this->unit=unit;
            
            
        }
		NumberWithUnits(){}//for test only
         ~NumberWithUnits(){}
         static void read_units(ifstream& units_file);
         bool operator == (const NumberWithUnits &f) const;
		bool operator != (const NumberWithUnits &f) const;
		NumberWithUnits operator-() ;
		NumberWithUnits operator+() ;


		NumberWithUnits& operator ++ (); 
		NumberWithUnits& operator -- ();     
    
		// const NumberWithUnits  operator ++ (int); 
				// const NumberWithUnits  operator -- (int);   
  

	friend NumberWithUnits operator--(NumberWithUnits& n);
	friend NumberWithUnits operator++(NumberWithUnits& n);
	friend NumberWithUnits operator++(NumberWithUnits& n, int a);

	

        
    friend NumberWithUnits operator--(NumberWithUnits& n, int a);
		
		friend NumberWithUnits operator + 	(const NumberWithUnits &f1, const NumberWithUnits &f2);
		friend NumberWithUnits operator - 	(const NumberWithUnits &f1, const NumberWithUnits &f2);
		friend NumberWithUnits operator * 	(const NumberWithUnits &f1, const NumberWithUnits &f2);
		friend NumberWithUnits operator / 	(const NumberWithUnits &f1, const NumberWithUnits &f2);
		 NumberWithUnits operator+=( const NumberWithUnits& n2);
		friend  bool operator<=(const NumberWithUnits& n1, const NumberWithUnits& n2);
		friend  bool operator>(const NumberWithUnits& n1, const NumberWithUnits& n2);
		friend     NumberWithUnits operator*(double num, NumberWithUnits& n);

		friend std::ostream& operator <<	(std::ostream &os, const NumberWithUnits &f);
		friend std::istream& operator >>	(std::istream &is, NumberWithUnits &f);

		friend NumberWithUnits operator % 	(const NumberWithUnits &f1, const NumberWithUnits &f2);// Bad One
}; 
        
        
    };
