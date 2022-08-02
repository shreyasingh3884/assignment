#include <iostream>
#include<string>
using namespace std;
class Saurabh
{
public:
  void noofvehicle ()
  {
    cout << "Saurabh has two vehices" << endl;
  }
};
class vehicle:public Saurabh
{

  std::string name;
   std::string type;
   std::string fuel;
   std::string used_or_new;
    std::string manufactur_details;
public:
  void setvehicledetails (std::string a, std::string b, std::string c,
			   std::string d, std::string e)
  {
    name = a;
    type = b;
    fuel = c;
    used_or_new = d;
    manufactur_details = e;

  }
  void display_vehicle_details ()
  {
    cout << "Vehicle name is " << name << "   and it is a " << type << endl
      << name << " runs on " << fuel << endl << name << " is " <<
      used_or_new << " and " << manufactur_details << endl;
  }

};

int
main ()
{

  Saurabh a;
  a.noofvehicle ();
  vehicle car;
  vehicle bike;
  car.setvehicledetails ("honda accord", "car"," diesel", "new",
			 "made in India");
  bike.setvehicledetails ("Ducati", "bike", "petrol", "used",
			  "imported vehicle");
  car.display_vehicle_details ();
  bike.display_vehicle_details ();

  return 0;
}
