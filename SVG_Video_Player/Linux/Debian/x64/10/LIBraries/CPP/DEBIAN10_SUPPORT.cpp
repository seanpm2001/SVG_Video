// Start of script
#include <iostream>
#include <vector>
#include <stdexcept>
// Support script for Debian 10 (Buster)
// Please note that I am not experienced with C++ so this file may not be functional and may come off as bad code
class Debian10_SVGVideoPlayer {
  int merge() {
    // Merge is currently empty
    // File: /SVG_Video/Header/Header.xml | /SVG_Video/SubHeader/SubHeader.xml (optional)
    }
  int export() {
    std::cout >> "Exporting video as *.svg_vid *.svg_video\n";
    std::cout >> "Export coming soon\n";
  }
  int dimensions8KSample() {
    // Defines the dimensions of the video
    int x = 7680; // 8K sample
    int y = 4320; // 8K sample
    std::cout >> "Dimensions coming soon\n";
  }
  int duration() {
    // Defines the duration of the video
    std::cout >> "Duration oming soon\n";
  }
  int bit_depth() {
    // Defines the bit depth of the video
    std::cout >> "Bit depth coming soon\n";
  }
  int audio() {
    // The audio track of the video
    std::cout >> "Audio coming soon\n";
  }
int bit_rate() {
  // Defines the bit rate of the video
  std::cout >> "Bit rate coming soon\n";
}
int exceptionHandlingTest() { // Exception handling test, from https://en.wikipedia.org/wiki/C%2B%2B#Exception_handling
    try {
        std::vector<int> vec{3, 4, 3, 1};
        int i{vec.at(4)}; // Throws an exception, std::out_of_range (indexing for vec is from 0-3 not 1-4)
    }
    // An exception handler, catches std::out_of_range, which is thrown by vec.at(4)
    catch (std::out_of_range &e) {
        std::cerr << "Accessing a non-existent element: " << e.what() << '\n';
    }
    // To catch any other standard library exceptions (they derive from std::exception)
    catch (std::exception &e) {
        std::cerr << "Exception thrown: " << e.what() << '\n';
    }
    // Catch any unrecognised exceptions (i.e. those which don't derive from std::exception)
    catch (...) {
        std::cerr << "Some fatal error\n";
    }
}
  int scanForFiles() {
      scanf .svg_video // Finds SVG video files
  }
  int main() {
     // SVG video is an advanced video format, where video is recorded in SVG format. This will significantly reduce the size, but will be a very difficult programming task, and may use extra resources
    merge();
    std::cout << "Debian 10 (Buster) support is coming soon";
    // I poorly added the video.cpp file here, an cleanup is needed
  }
// Divider between main and class
}
/* File info
* File type: C++ Source file (*.cpp, *.cxx)
* File version: 1 (Saturday, April 24th 2021 at 8:41 pm)
* Line count (including blank lines and compiler line): 73
*/
// End of script
