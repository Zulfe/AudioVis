/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Damon
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
  RtAudio *audio = 0;

  // Default RtAudio constructor
  try {
    audio = new RtAudio();
  }
  catch (RtError &error) {
    // Handle the exception here
    error.printMessage();
  }

  // Clean up
  delete audio;
    return 0;
}

