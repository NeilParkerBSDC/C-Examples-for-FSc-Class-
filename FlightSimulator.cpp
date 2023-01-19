#include <iostream>

class aircraft {       
  public:             
   // Properties
    int speed;
    int altitude;
    int bearing;

  // Methods
     void accelerate() {  
       std:: cout << "Starting Speed: ";
       std:: cout << speed;
       speed+=1;
       std:: cout << "\n Starting Speed: ";
       std:: cout << speed;
       }
};


int main() {
  aircraft aircraft1; 
  aircraft1.speed = 0; 
  aircraft1.accelerate();
  
}