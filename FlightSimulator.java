class aircraft{
   // Properties
    int speed=0;
    int altitude=0;
    int bearing=0;

  //Methods

  void myMethod() {
    System.out.println("starting Speed: ");
    System.out.println(speed);
    speed+=1;
    System.out.println("starting Speed: ");
    System.out.println(speed);
  }
}

class Main {
  public static void main(String[] args) {
    aircraft myPlane = new aircraft();

      myPlane.myMethod();
      
  }
}

/*
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

*/