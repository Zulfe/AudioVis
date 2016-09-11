/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Damon, Chris
 *
 * Created on September 11, 2016, 12:00 AM
 */

#include <iostream>
#include <cstdlib>
#include "RtAudio.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  RtAudio audio;
  // Determine the number of devices available
  unsigned int devices = audio.getDeviceCount();
  // Scan through devices for various capabilities
  RtAudio::DeviceInfo info;
  for ( unsigned int i=0; i<devices; i++ ) {
    info = audio.getDeviceInfo( i );
    if ( info.probed == true ) {
      // Print, for example, the maximum number of output channels for each device
      std::cout << "device = " << i;
      std::cout << ": maximum output channels = " << info.outputChannels << "\n";
    }
  }
  
    return 0;
}

