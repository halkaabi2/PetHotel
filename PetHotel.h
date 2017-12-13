#ifndef _PETHOTEL_H_
#define _PETHOTEL_H_

#include <vector>
#include <string>

using namespace std;

class PetHotel
{
private:

string name;
vector<string> pet_vec;

public:

PetHotel(string n);
string getHotelName();
void addPet(string);
string whoIsInKennel(int);

};

#endif

