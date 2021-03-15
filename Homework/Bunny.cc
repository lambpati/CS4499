#include "Bunny.hh"


//Constructors
Bunny::Bunny(std::string gend, std::string col, int years, std::string nam, bool isRMVB):
  gender(gend), color(col), age(years), name(nam), radioactive_mutant_vampire_bunny(isRMVB)
{

}
Bunny::Bunny(): age(0)
{

}
