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

Bitmap image;
vector<vector<Pixel> >bmp;
Pixel rgb;
bmp=image.toPixelMatrix();
cout<<"What is the name of the image?(BMP format image only)"<<endl;
cin>>file;
image.open(file);
bmp=image.toPixelMatrix();
cout<<"The size of the file is "<< bmp.size()<< "Pixel's height and" <<bmp[0].size()<<  "Pixel's width"<<endl;


return 0;
}


//By using "cout", ask usere for the name they want to use for the file (must be a Windows BMP format image).
//If the input of the user does not match the requirement, cout as"the file must be a 24 bit depth Windows BMP file, please enter the file name again". Use loop until we get the proper input".

//After getting the response from users, save the original picture first and  convert the image to make every pixel in grayscale (take the average of three colors)
//After coverting the photo, ask users to save the file as oldtimey.bmp
