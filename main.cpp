#include <iostream>
#include <string>
#include "PetHotel.h"

using namespace std;

string getName();
int getLocation(PetHotel);
const string EMPTY = "";

int main()
{
    PetHotel dogs("Doggie Daycare");
    string choice;
    do
    {
        cout<<"\nWelcome to "
            //gets the name of the pet hotel
            <<dogs.getHotelName()<<endl;
        cout<<"====\nMENU\n====\n";
        cout<<"(add) Pet\n(at) Kennel #\n(quit)\n";
        cout<<"YOUR CHOICE:\n";
        cin>>choice;
        
        if( choice == "add" )
        {
            string dog = getName();
            //places dog in the next kennel #
            dogs.addPet( dog );
        }
        else if( choice == "at" )
        {
            int lookAt = getLocation(dogs);
            //gets the name of the dog at the location provided or an empty 
            //string if there is no dog at that location (or doesn't exist)
            string name = dogs.whoIsInKennel(lookAt);
            if( name == EMPTY )
            {
                cout<<"No pets at "<<lookAt<<endl;
            }
            else
            {
                cout<<"Kennel #"<<lookAt<<" has "<<name<<endl;
            }
        }
    }while( choice != "quit" );
    return 0;
}

string getName()
{
    string name;
    cout<<"What is the pet's name?\n";
    cin>>name;
    return name;
}

int getLocation(PetHotel hotel)
{
    int location;

    cout<<"Which kennel #?\n";
    cin>>location;

    return location;
}