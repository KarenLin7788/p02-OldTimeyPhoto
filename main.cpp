//Author: Xinru Lin
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"bitmap.h"
#include<cstdlib>

using namespace std;
int main()
{
string file;
int cols;
int row;
Bitmap image;
vector<vector<Pixel> >bmp;
bool validBmp;
Pixel greyDot;
do
   {
   cout<<"What is the name of the image?(BMP format image only)"<<endl;
   cin>>file;
   image.open(file);
   validBmp = image.isImage();
   if (validBmp != true)
      {
      cout<<"the file must be a 24 bit depth Windows BMP file, please ener the file name again";
      }

   }
   while (validBmp != true);
   bmp = image.toPixelMatrix();
if (validBmp == true)
      {
   
      cout<<"The size of the file is "<< bmp.size() << " Pixel's height and " <<bmp[0].size() <<  " Pixel's width"<<endl;
      for (row=0;row<bmp.size();row++)
         {

          for (cols=0;cols<bmp[0].size();cols++)
              {
              greyDot=bmp[row][cols];

              greyDot.red =0.299*255;
              greyDot.green=0.587*255;
              greyDot.blue=0.114*255;

              bmp[row][cols]=greyDot;
              }
         }

      
      image.fromPixelMatrix(bmp);
      image.save("OldTimeyPhot.bmp");
      cout<<"Here is the OleTimeyPhoto: "<<file<<endl;
      }
return 0;
}


//By using "cout", ask usere for the name they want to use for the file (must be a Windows BMP format image).
//If the input of the user does not match the requirement, cout as"the file must be a 24 bit depth Windows BMP file, please enter the file name again". Use loop until we get the proper input".

//After getting the response from users, save the original picture first and  convert the image to make every pixel in grayscale (take the average of three colors)
//After coverting the photo, ask users to save the file as oldtimey.bmp

