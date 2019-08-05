// Deallocate memory for kitchenPaint using the delete operator. 

#include <iostream>
using namespace std;

class PaintContainer {                    //creates new class named PaintContainer
   public:
      ~PaintContainer();                  // destructor call from class
      double gallonPaint;
};

PaintContainer::~PaintContainer() {       // destructor definition
   cout << "PaintContainer deallocated." << endl;
   return;
}

int main() {
   PaintContainer* kitchenPaint;           // new pointer for class.item PaintContainer.kitchenPaint

   kitchenPaint = new PaintContainer;      // allocates memory for kitchenPaint pointer
   kitchenPaint->gallonPaint = 26.3;       // uses member access operator "->" as another way for (*PaintContainer).kitchenPaint 

   /* Your solution goes here  */
   
   delete kitchenPaint;                    // deallocates memory space for kitchenPaint pointer

   return 0;
}
