/*

Word file .
{
    Concept 1

class Parent{}


class Child:public Parent
here public of parent become public of child and protected of parent become protected of child  

class grandchild:public Child

}

{
    Concept 2

class Parent{}


class Child:protected Parent
here public and protected of parent become protected of child  

class grandchild:public Child
and here as explained in concept 1 protected of child become protected of grandchild
public of child become public of grandchild 

}

{
    Concept 3

class Parent{}


class Child:private Parent
here public protected of parent become private of child 

class grandchild:public Child
and here as everything private in  child so members  will not be here inheirted


}


 */