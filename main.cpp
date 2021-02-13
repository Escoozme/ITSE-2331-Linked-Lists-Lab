#include "LinkList.h"

int main(int argc, char** argv) {
    LinkList object;
    
    object.addFront("You");
    object.addFront("How Are");
    object.addFront("Hello");
    object.display();
    
    object.addBack("I Am");
    object.addBack("Fine");
    object.addBack("Thank You");
    object.display();
    
    object.remove("Hello");
    object.remove("Thank You");
    object.display();
    
    object.addFront("Yo, What Up");
    object.addBack("No Thanks To You");
    object.display();
    
    return 0;
}

