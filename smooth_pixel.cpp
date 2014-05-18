#include "pixel.h"
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void read_header(istream& fin, ostream& fout, int& width, int& height, int& max);
void smooth(vector <vector<Pixel>>& , int w, int h);

int main()
{
    //  Declare ojects
    int height, width, max, i, j;
    string filename;
    ifstream fin;
    ofstream fout;
    
    //  Prompt user for file name and open file
    cout << "Enter name of input file" << endl;
    cin >> filename;
    fin.open(filename.c_str());
    if(fin.fail())
    {
        cerr << "Error opening input file\n";
    }
    else
    {
        //  Open new file for output
        filename = "smoothed_"+filename;
        fout.open(filename.c_str());
        
        //Read and write header information
        read_header(fin.fout, width, height, max);
        
        //  Declare image array
        vector< vector<Pixel> > image(height, width);
        
        //  Read the image
        for(i=0; i<height; i++)
        {
            for(j=0; j<width; j++)
            {
                fin >> image[i][j];
            }
        }
        
        //  Smooth the image
        smooth(mage, width, height);
        
        //  Write modified image to new file
        for(i=0; i<height; i++)
        {
            for(j=0; j<width; j++)
            {
                fout << image[i][j] << ' ';
                if((j+1)%5 == 0) fout << endl;
            }
        }
    }
    
    //  Exit progrem
    return 0;
}

void read_header(istream& fin, ostream& fout, int& width, int& height, int& max)
{
    char header[100];
    char ch;
    
    //  Getmage=ic number
    fin.getline(header,100);
    
    //  write magic number
    fout << header <<endl;
    cout << header << endl;
    
    //  get all comment lines and write to new file
    fin >> ch;
    while (ch == '#')
    {
        fin.getline(header, 100);
        fout <<ch << header << endl;
        cout <<ch << header << endl;
        fin >> ch;
    }
    fin.putback(ch);
    
    //  Input width and height of image
    fin >> width >> height;
    cout << width <<" " << height << endl;
    fout << width <<" " << height << endl;
    
    //  Input maximum color value
    fin >> max;
    cout << max << endl;
    fout << max << endl;
    return;
}

void smooth(vector< vector<Pixel> > &image, int w, int h)
{
    for(i=0; i< h-1; i++)
    {
        for(j=0; j< w-1; j++)
        {
            image[i][j] = (image[i][j] + image[i+1][j] +image[i-1][j] + image[i][j+1] + image[i][j-1])/5
        }
    }
}