//============================================================================
// Name        : jevois.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================




#include <iostream>
#include "TimeoutSerial.h"
#include "ujevois.h"
#include <string>
using namespace std;


int main()
{
    cout << "Hello, World!\n";
    //TimeoutSerial serial(SERIAL_PORT,BAUDRATE);
    uJevois jev;
    jev.initJevois();
    jev.changeModule(10);
    jev.checkStatus();

    //serial.writeString("ping\n"); //check if camera is running
    //string frSerial = serial.readString(5); //Reading output from camera
    //cout<<frSerial;

    //jev.initJevois();
    //jev.changeModule(2);
    //jev.updateJevois();
    //jev.disconnectJevois();
    jev.serialobj.close();
    return 0;
}

