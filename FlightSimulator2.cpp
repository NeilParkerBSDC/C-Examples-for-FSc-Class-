#include <iostream>

class bomb {
  public:
//Properties
int altitude;
bool exploded;

//methods
void explode() {
    std:: cout << "BANG!";
    exploded=true;
    }

void descend(int droppingAlt) {
  altitude=droppingAlt;
  std:: cout <<"Dropping my bomb now!\n";
  while (altitude>0) {
    std:: cout <<"Bomb is at a height of ";
    std:: cout << altitude;
    std:: cout << " Meters";
    std:: cout << "\n";
    altitude-=100;
    }

  if (altitude==0) {
    explode();
    }
  }
};



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

    void dropBomb() {
      bomb myBomb;
      myBomb.descend(1000);
      }  

  };


int main() {
  aircraft aircraft1; 
  aircraft1.speed = 0; 
  aircraft1.accelerate();

  //aircraft1.dropBomb();  
};