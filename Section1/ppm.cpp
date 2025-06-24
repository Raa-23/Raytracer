#include <iostream>
#include <stdio.h>
#include<fstream>

int main() {
  // Image dimensions
  int width = 256;
  int height = 256;

  //Parsing the image
  std::ofstream outputFile("output.txt");
  
  outputFile <<"P3\n" << height <<" " << width << "\n255\n";
  for(int i = 0; i < height ; i++){
    for(int j = 0; j < width ; j++){
      // pixel values corresponding to each position in the image
      auto r = double(i)/ (height -1);
      auto g = double(j) / (width - 1);
      auto b = 0.0;

      // calculating the pixel values
      int ir = int(254.99 * r);
      int ig = int(254.99 * g);
      int ib = int(254.99 * b);

      outputFile << ir <<" "<< ig <<" "<< ib << "\n";
      
    }
   
  }
  
}
