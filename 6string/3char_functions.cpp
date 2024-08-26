//char functions
#include<bits/stdc++.h>
using namespace std;
int main() {
//whenever like strstr written it means function start from left to right by default
//whenever like strrstr written it means function start from right to left 
//whenever like strnstr written it means function done with limited words 

//string lenght
    char s1[100]="hello";
    cout<<strlen(s1)<<endl;

//concatinating strings
    char s2[100]="world";
    cout<<strcat(s1,s2)<<endl; 


//concatinating strings with limited words using strncat
    char s3[100]="welcome";
    char s4[100]="again";
    cout<<strncat(s3,s4,3)<<endl;


//copying a string into another 
    char s5[100]="good";
    char s6[100]="ok";
    cout<<strcpy(s6,s5)<<endl;

//copying a string into another with limited letters
    char s7[100]="morning";
    char s8[100]="";
    cout<<strncpy(s8,s7,2)<<endl;

//finding substring using another string
    char s9[100]="topper";
    char s10[100]="op";
    char s11[100]="k";
    cout<<strstr(s9,s10)<<endl;
    //cout<<strstr(s9,s11)<<endl; //neither error nor output but it will stop further steps so use loop
    // as s11 is not a substring of s9
    //also for s9,s10 as double things will mix up our mind so just learn the below method
    if(strstr(s9,s11)!=NULL)
    {
        cout<<strstr(s9,s11)<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }


//same as substring here just a char is used 
    char s12[100]="copycat";
    cout<<strchr(s12,'c')<<endl;
    cout<<strrchr(s12,'c')<<endl;
    
//string comparison follows english dictionary method
//return 0 if both string same
//return +ve if first string come later then 2nd one and -ve if 1st come earlier then 2nd

    char s13[100]="Hello";

    cout<<strcmp(s9,s10)<<endl; //s9 comes after s10 in dictionary
    cout<<strcmp(s1,s13)<<endl; //s1 has h and s13 H so using Ascii code H come earlier than h so +ve
    cout<<strcmp(s13,s1)<<endl; // H come earlier than h so -ve here as s13,s1  


//converting a string into long int or float 
//strtol means string to long int
//strtof means string to float
    char s14[10]="214";
    char s15[10]="214.88";
    long int x=strtol(s14,NULL,10); //10 is base because we are using decimal datatype 
                                    //if we use binary then use 2 and 8 for octal
    float z=strtof(s15,NULL);
    cout<<x<<"    "<<z<<endl;
//earliet they were char type so we can't use arithmetic operators on string but now they are of 
//int/float so we can use arithmetic operators 
     cout<<x+10<<"    "<<z-5<<endl;


// tokenising a string means cutting string around a character 
    char s16[100]="Hi , My name is Sachin !";
    char *tkn=strtok(s16," "); //here we will tokenise around space chk ouput
    while(tkn!=NULL)
    {
        cout<<tkn<<endl;
        tkn=strtok(NULL," ");
    }
//see in output even comma is shown if use use" ," then comma will not be shown    
}