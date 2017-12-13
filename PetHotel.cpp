#include "PetHotel.h"

PetHotel::PetHotel(string n) : name(n)
{}

string PetHotel::getHotelName()
{
return name;
}

void PetHotel::addPet(string pet)
{
pet_vec.push_back( pet );
}

string PetHotel::whoIsInKennel(int loc)
{
if ( loc >= 0 && loc < pet_vec.size() )
return pet_vec[loc];

else
return "";
}


