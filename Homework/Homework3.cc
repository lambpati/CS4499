#include <iostream>
#include <vector>
#include <algorithm>
#include "Vehicle.hh"
#include "Truck.hh"

void printVehicle(Vehicle v){
  std::cout << "Vehicle: " << v.getYear() << " " << v.getManufacturer() << " " << v.getModel() << " " << v.getMileage() << " miles $" << v.getValue() << '\n';
}

void printTruck(Truck t){
  printVehicle(t);
  std::cout << "\t"  << "is AWD? " << t.getAwd() << " and tows " << t.getTowing_capacity() << " lbs"<< '\n';
}

int main(int argc, char const *argv[]) {
  Vehicle vehicle; // Default vehicle
  std::cout << "Default vehicle:" << '\n';
  printVehicle(vehicle);
  std::cout << "New vehicle:" << '\n';
  Vehicle cherokee(2016,50000,15000,"Jeep","Cherokee"); // Construct non-default
  printVehicle(cherokee);
  cherokee.setYear(1995);
  cherokee.setModel("Civic");
  cherokee.setMileage(120000);
  cherokee.setValue(2500);
  cherokee.setManufacturer("Honda");

  std::cout << "Changed vehicle: \n";
  printVehicle(cherokee);
  std::cout << "\n \n";


  Truck truck; //Default truck
  std::cout << "Default truck:" << '\n';
  printTruck(truck);
  std::cout << "New truck:" << '\n';
  Truck tundra(2008,120000,50000,"Toyota","Tundra",true,4000);
  printTruck(tundra);
  tundra.setAwd(false);
  tundra.setTowing_capacity(3000);

  std::cout << "Changed truck: \n";
  printTruck(tundra);
  std::cout << "\n \n";


  std::vector<Truck> trucks;
  trucks.push_back(Truck(2007,199045,13995,"Chevrolet","Kodiak",false,16000));
  // https://www.kbb.com/cars-for-sale/vehicledetails.xhtml?listingId=528987000&zip=83201&referrer=%2Fcars-for-sale%2Fsearchresults.xhtml%3Fzip%3D83201%26keywordPhrases%3Dkodiak%26city%3DPocatello%26sortBy%3Drelevance%26location%3D%255Bobject%2BObject%255D%26incremental%3Dall%26state%3DID%26firstRecord%3D0%26marketExtension%3Dinclude%26relevanceConfig%3Ddefault%26searchRadius%3D50%26isNewSearch%3Dfalse&numRecords=25&firstRecord=0&searchRadius=50&clickType=spotlight
  trucks.push_back(Truck(2018,60631,38900,"Ford","F150",true,11500));
  // https://www.kbb.com/cars-for-sale/vehicledetails.xhtml?listingId=565487356&zip=83201&referrer=%2Fcars-for-sale%2Fsearchresults.xhtml%3Fzip%3D83201%26city%3DPocatello%26sortBy%3Drelevance%26location%3D%255Bobject%2BObject%255D%26vehicleStyleCodes%3DTRUCKS%26incremental%3Dall%26state%3DID%26firstRecord%3D0%26marketExtension%3Dinclude%26relevanceConfig%3Ddefault%26searchRadius%3D50%26isNewSearch%3Dfalse&numRecords=25&vehicleStyleCodes=TRUCKS&firstRecord=0&searchRadius=50&clickType=spotlight
  trucks.push_back(Truck(2015,185268,20995,"Chevrolet","Silverado",true,13800));
  // https://www.kbb.com/cars-for-sale/vehicledetails.xhtml?listingId=572109373&zip=83201&referrer=%2Fcars-for-sale%2Fsearchresults.xhtml%3Fzip%3D83201%26city%3DPocatello%26sortBy%3Drelevance%26location%3D%255Bobject%2BObject%255D%26vehicleStyleCodes%3DTRUCKS%26incremental%3Dall%26state%3DID%26firstRecord%3D0%26marketExtension%3Dinclude%26relevanceConfig%3Ddefault%26searchRadius%3D50%26isNewSearch%3Dfalse&numRecords=25&vehicleStyleCodes=TRUCKS&firstRecord=0&searchRadius=50&clickType=spotlight
  trucks.push_back(Truck(2019,37345,54762,"GMC","Sierra",true,14000));
  // https://www.kbb.com/cars-for-sale/vehicledetails.xhtml?listingId=559209670&zip=83201&referrer=%2Fcars-for-sale%2Fsearchresults.xhtml%3Fzip%3D83201%26city%3DPocatello%26sortBy%3Drelevance%26location%3D%255Bobject%2BObject%255D%26vehicleStyleCodes%3DTRUCKS%26incremental%3Dall%26state%3DID%26firstRecord%3D0%26marketExtension%3Dinclude%26relevanceConfig%3Ddefault%26searchRadius%3D50%26isNewSearch%3Dfalse&numRecords=25&vehicleStyleCodes=TRUCKS&firstRecord=0&searchRadius=50&makeCode1=GMC&modelCode1=GMCC25PU&clickType=listing
  trucks.push_back(Truck(2017,42930,37980,"RAM","Laramie",true,4190));
  // https://www.kbb.com/cars-for-sale/vehicledetails.xhtml?listingId=570103032&zip=83201&referrer=%2Fcars-for-sale%2Fsearchresults.xhtml%3Fzip%3D83201%26city%3DPocatello%26sortBy%3Drelevance%26location%3D%255Bobject%2BObject%255D%26vehicleStyleCodes%3DTRUCKS%26incremental%3Dall%26state%3DID%26firstRecord%3D0%26marketExtension%3Dinclude%26relevanceConfig%3Ddefault%26searchRadius%3D50%26isNewSearch%3Dfalse&numRecords=25&vehicleStyleCodes=TRUCKS&firstRecord=0&searchRadius=50&makeCode1=RAM&modelCode1=RM1500&clickType=listing
  for_each(trucks.begin(), trucks.end(), printTruck);

  
  return 0;
}
