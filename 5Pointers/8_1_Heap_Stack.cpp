/*
memory location means new value like 20 can be assigned
//memory is data

using delete p
Pointer invalidation: The pointer p becomes a dangling pointer, meaning it no longer points to a valid memory location.

Important notes:

delete p should only be used with pointers that were allocated using new. 
If p was not allocated using new, using delete p will result in undefined behavior.

int *p = new int; allocates a block of memory on the heap for new int, let's say at address 0x1000.
*p=10 
0x1000 This block of memory contains the int value 10.
The pointer p is stored in a separate memory location, let's say at address 0x2000. 
The value of p is the address of the memory block that contains the int value 10, which is 0x1000.

delete p only deallocates the memory, it does not delete the pointer p itself. The pointer p still exists, but it's no longer valid to point old memory.

delete p; // Deallocate the memory
delete p; - You delete the memory pointed by p. i.e. value 10 at 0x1000 not 0x1000
This does not set p to nullptr or change its value in any way.
It simply marks the memory location as available for reuse. 


p still holds the same address, 
but the memory it points to is no longer valid

p = nullptr; // Set p to nullptr to avoid dangling pointer issues

Summary
starting
          +---------------+
          |  0x2000    |
          |  +-------+  |
          |  |  p   |  |
          |  +-------+  |
          |  | 0x1000 |  |
          +---------------+
                  |
                  |
                  v
          +---------------+
          |  0x1000    |
          |  +-------+  |
          |  |  int  |  |
          |  |  value |  |
          |  |  10    |  |
          +---------------+

delete p
        +---------------+
          |  0x2000    |
          |  +-------+  |
          |  |  p   |  |
          |  +-------+  |
          |  | 0x1000 |  |
          +---------------+
                  |
                  |
                  v
          +---------------+
          |  0x1000    |
          |  +-------+  |
          |  |  ???  |  |
          |  |  (free) |  |
          |  |  (old data still present but not accesible) |  |
          +---------------+
          the memory at 0x1000 is now in a "free" or "unallocated" state, meaning it's available for future allocations.
           However, the contents of that memory are not changed or reset, 
          so any data that was previously stored there is still present, but it's no longer accessible through the p pointer.

          
p=null ptr
          +---------------+
          |  0x2000    |
          |  +-------+  |
          |  |  p   |  |
          |  +-------+  |
          |  | nullptr |  |
          +---------------+
                  

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //stack
    int a=10;

    //heap
    int *p=new int;
    *p=10;
    cout<<p<<"   "<<*p<<endl;
    delete p;
    cout<<"working ?  "<<p<<"   "<<*p<<endl;//not working
    *p=20;
    cout<<"working ?  "<<p<<"   "<<*p<<endl;//working
    delete p;  
    p=nullptr;   //now memory freed
    cout<<"working ?  "<<p<<endl;// working prints 0 bcs null pointer
}