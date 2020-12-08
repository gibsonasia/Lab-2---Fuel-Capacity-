//Asia Gibson

class Car {

  public:
    // 1) define custom constructor 
    explicit Car(double fuel){
      if(fuel > 10 ) fuelCapacity = fuel;
      
    }
   
    Car(){}
   
     double addFuel(double gal){
      if(gal > 0)
      {
        if( gal > fuelCapacity){
        return 10;
      }
      }
      return availableFuel + gal;
     }
    double getFuelCapacity() const {
      return fuelCapacity;
    }
    double getAvailableFuel() const {
      return availableFuel;
    }

  private:
  
    // current number of gallons of gas in tank
    double availableFuel{2};  
    // how many gallons tank can hold
    double fuelCapacity{10};  

};
