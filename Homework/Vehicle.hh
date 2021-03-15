#pragma once

#include <string>

class Vehicle {
  private:
    int year;
    float mileage; // For cars which might have a decimal value mileage
    float value; // For cents if necessary
    std::string manufacturer;
    std::string model;

    float value_date;

  public:
    // Constructors
    Vehicle(int, float, float, std::string, std::string, float);
    Vehicle();

    //Destructor
    ~Vehicle();
    // Getter
    int getYear() const {
      return year;
    }
    float getMileage() const {
      return mileage;
    }
    float getValue() const {
      return value;
    }
    std::string getManufacturer() const {
      return manufacturer;
    }
    std::string getModel() const {
      return model;
    }

    float getValue_Date() const {
      return value_date;
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

    void setValueDate(float date){
      value_date = date;
    }

    //Methods
    void updateValue(float current_date);

    float estimateValue(float estimated_date) const;


};
