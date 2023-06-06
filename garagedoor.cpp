
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

class GarageDoor{
    private:
    bool isOpen;
    
   public:
    GarageDoor() : isOpen(false) {}
    
    void open(){
        if(!isOpen){
            isOpen = true;
            cout<<" the garage door is open"<<endl;
        }
        
            
            else{
                cout<<"\n\t The garage door was already open!"<<endl;
            }
        }
        
    void close(){
        if(isOpen){
            isOpen = false;
            cout<<"\n\t the garage door is closed"<<endl;
        }
        
            
            else{
                cout<<"\n\t The garage door was already closed!"<<endl;
            }
        }
        
        
    };

    //Garage Door controller
    
    class GarageDoorController { 
        
        public: 
           void controlGarageDoor(GarageDoor& door, bool open){
               if(open){
                   door.open();
                   
               }
               else{
                   door.close();
               }
               
           }
        
    };

int main()
{
    GarageDoor garageDoor;
    GarageDoorController controller;
    
    // To Control the garage door
    
    // Open the garage door
    controller.controlGarageDoor(garageDoor, true);
    
    // Close the garage door
    controller.controlGarageDoor(garageDoor, false);
    
    return 0;
}
