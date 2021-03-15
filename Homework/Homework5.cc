#include <iostream>
#include <vector>
#include <algorithm>
#include "Vehicle.hh"
#include "Truck.hh"

void TruckEst(float price){
  std::cout << "Estimated value of as of April 1st, 2024: $" << price << '\n';
}

std::vector<float> estVal(std::vector<Truck> const& truck, float const& ref){
  std::vector<float> v;
  for(int i = 0; i < truck.size(); i++){
    v.push_back(truck[i].estimateValue(ref));
  }
  return v;
}

int main(int argc, char const *argv[]) {
  Truck chevy = Truck(2015,0, 37000, "Chevrolet", "Colorado",2015.152,true,5000);
  std::cout << "Original date: " << chevy.getValue_Date() << '\n';
  std::cout << "Original value: " << chevy.getValue() << '\n';

  chevy.updateValue(2021.1534); //February 25 2021
  std::cout << "value_date: " << chevy.getValue_Date() << '\n';
  std::cout << "Updated value: " << chevy.getValue() << '\n';


  //TRUCK TIME
  std::vector<Truck> trucks;
  trucks.push_back(Truck(2007,199045,13995,"Chevrolet","Kodiak",2021.046,false,16000));
  // https://www.kbb.com/cars-for-sale/vehicledetails.xhtml?listingId=528987000&zip=83201&referrer=%2Fcars-for-sale%2Fsearchresults.xhtml%3Fzip%3D83201%26keywordPhrases%3Dkodiak%26city%3DPocatello%26sortBy%3Drelevance%26location%3D%255Bobject%2BObject%255D%26incremental%3Dall%26state%3DID%26firstRecord%3D0%26marketExtension%3Dinclude%26relevanceConfig%3Ddefault%26searchRadius%3D50%26isNewSearch%3Dfalse&numRecords=25&firstRecord=0&searchRadius=50&clickType=spotlight
  trucks.push_back(Truck(2018,60631,38900,"Ford","F150",2021.046,true,11500));
  // https://www.kbb.com/cars-for-sale/vehicledetails.xhtml?listingId=565487356&zip=83201&referrer=%2Fcars-for-sale%2Fsearchresults.xhtml%3Fzip%3D83201%26city%3DPocatello%26sortBy%3Drelevance%26location%3D%255Bobject%2BObject%255D%26vehicleStyleCodes%3DTRUCKS%26incremental%3Dall%26state%3DID%26firstRecord%3D0%26marketExtension%3Dinclude%26relevanceConfig%3Ddefault%26searchRadius%3D50%26isNewSearch%3Dfalse&numRecords=25&vehicleStyleCodes=TRUCKS&firstRecord=0&searchRadius=50&clickType=spotlight
  trucks.push_back(Truck(2015,185268,20995,"Chevrolet","Silverado",2021.046,true,13800));
  // https://www.kbb.com/cars-for-sale/vehicledetails.xhtml?listingId=572109373&zip=83201&referrer=%2Fcars-for-sale%2Fsearchresults.xhtml%3Fzip%3D83201%26city%3DPocatello%26sortBy%3Drelevance%26location%3D%255Bobject%2BObject%255D%26vehicleStyleCodes%3DTRUCKS%26incremental%3Dall%26state%3DID%26firstRecord%3D0%26marketExtension%3Dinclude%26relevanceConfig%3Ddefault%26searchRadius%3D50%26isNewSearch%3Dfalse&numRecords=25&vehicleStyleCodes=TRUCKS&firstRecord=0&searchRadius=50&clickType=spotlight
  trucks.push_back(Truck(2019,37345,54762,"GMC","Sierra",2021.046,true,14000));
  // https://www.kbb.com/cars-for-sale/vehicledetails.xhtml?listingId=559209670&zip=83201&referrer=%2Fcars-for-sale%2Fsearchresults.xhtml%3Fzip%3D83201%26city%3DPocatello%26sortBy%3Drelevance%26location%3D%255Bobject%2BObject%255D%26vehicleStyleCodes%3DTRUCKS%26incremental%3Dall%26state%3DID%26firstRecord%3D0%26marketExtension%3Dinclude%26relevanceConfig%3Ddefault%26searchRadius%3D50%26isNewSearch%3Dfalse&numRecords=25&vehicleStyleCodes=TRUCKS&firstRecord=0&searchRadius=50&makeCode1=GMC&modelCode1=GMCC25PU&clickType=listing
  trucks.push_back(Truck(2017,42930,37980,"RAM","Laramie",2021.046,true,4190));
  // https://www.kbb.com/cars-for-sale/vehicledetails.xhtml?listingId=570103032&zip=83201&referrer=%2Fcars-for-sale%2Fsearchresults.xhtml%3Fzip%3D83201%26city%3DPocatello%26sortBy%3Drelevance%26location%3D%255Bobject%2BObject%255D%26vehicleStyleCodes%3DTRUCKS%26incremental%3Dall%26state%3DID%26firstRecord%3D0%26marketExtension%3Dinclude%26relevanceConfig%3Ddefault%26searchRadius%3D50%26isNewSearch%3Dfalse&numRecords=25&vehicleStyleCodes=TRUCKS&firstRecord=0&searchRadius=50&makeCode1=RAM&modelCode1=RM1500&clickType=listing
  std::vector<float> price = estVal(trucks,2024.061);
  std::for_each(price.begin(),price.end(),TruckEst);

    return 0;
}
