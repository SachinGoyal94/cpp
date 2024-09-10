//we know we can't make object of astaction class why because it is a interface 
#include <bits/stdc++.h>
#include "1_bird.h"
using namespace std;
void birdDoesSomething(Bird *&bird)
{
    bird->eat();
    bird->fly();
}
int main()
{
    // Bird *bird = new Sparrow();
    // Bird *bird = new Eagle();
    Bird *bird = new Pigeion();
    birdDoesSomething(bird);
    // interface same h but functionality alag ho skti h ya changes ho skte h humme code mai koi change nhi krna
    return 0;
}
