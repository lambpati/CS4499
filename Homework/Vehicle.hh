#pragma once

#include <string>

class Vehicle {
  private:
    int year;
    float mileage; // For cars which might have a decimal value mileage
    float value; // For cents if necessary
    std::string manufacturer;
    std::string model;

  public:
    // Constructors
    Vehicle(int, float, float, std::string, std::string);
    Vehicle();

    //Destructor
    ~Vehicle();
    // Getter
    int getYear() {
      return year;
    }
    float getMileage() {
      return mileage;
    }
    float getValue() {
      return value;
    }
    std::string getManufacturer(){
      return manufacturer;
    }
    std::string getModel(){
      return model;
    }

    // Setter
    void setYear(int y){
      year = y;
    };
    void setMileage(float mile){
      mileage = mile;
    }
    void setValue(float val){
      value = val;
    }
    void setManufacturer(std::string man){
      manufacturer = man;
    }
    void setModel(std::string mod){
      model = mod;
    }

};
