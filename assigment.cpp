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
  const char *type;
  const char *fuel;
  const char *used_or_new;
    std::string manufactur_details;
public:
  void setvehicledetails (std::string a, const char *b, const char *c,
			  const char *d, std::string e)
  {
    name = a;
    type = b;
    fuel = c;
    used_or_new = d;
    manufactur_details = e;

  }
  void display_vehicle_details ()
  {
    cout << "Vehicle name is \t" << name << "   and it is a\t" << type << endl
      << name << " runs on\t" << fuel << endl << name << " is\t" <<
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
  car.setvehicledetails ("honda accord", "car", "diesel", "new",
			 "made in India");
  bike.setvehicledetails ("Ducati", "bike", "petrol", "used",
			  "imported vehicle");
  car.display_vehicle_details ();
  bike.display_vehicle_details ();

  return 0;
}
