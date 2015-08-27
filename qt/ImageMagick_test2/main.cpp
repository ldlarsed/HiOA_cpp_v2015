#include <iostream>
#include <Magick++.h>

using namespace std;
using namespace Magick;

int main(int argc,char **argv)
{

    InitializeMagick(*argv);

    Image image;
      try {
        // Read a file into image object
        image.read( "girl.gif" );

        // Crop the image to specified size (width, height, xOffset, yOffset)
        image.crop( Geometry(100,100, 100, 100) );

        // Write the image to a file
        image.write( "x.gif" );
      }
      catch( Exception &error_ )
        {
          cout << "Caught exception: " << error_.what() << endl;
          return 1;
        }

    cout << "Hello World!" << endl;
    return 0;
}

