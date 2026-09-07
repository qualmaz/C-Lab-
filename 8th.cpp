// Define a class shape whose attributes are radius length and width. Calculate perimeter of the rectangle and circle. use constructors and destructors.
#include<iostream>
#include<math>
using namespace std;


    class Shape{
        private:
        double radius,length,width;

        public:
        Shape(double r): radius(r), length(0),width(0){
            cout<< "Circle with perimeter with radius"<< radius << endl;

        }
        Shape(double l,double w): length(l),width(w),radius(0){
            cout<<" Rectangle with perimeter with length"<<length "width"<< width << endl;

        }
        ~Shape(){
            cout<< "destroyed"<< endl;

        }
         double rectanglePerimeter(){
            if(length>0 && width>0)
            {
                return(2*(length+width));
            
            }
            else{
                 cout<<"impossible\n";
            }
         float circlePerimeter(){
            return (2* 3.141325*radius);

         }   
             
        
               
            
         
    };
    int main();
    float r;
    double l,w;
    cout<<"enter radius:\n";
    cin>>r;
    cout<<"enter length and width";
    cin>>l>>r;
    Shape s(r,l,w);
    cout<<"\nPerimeter of circle ="<< s.circlePerimeter()<<endl;
    cout<<"Perimeter of Rectangle ="<<s.rectanglePerimeter()<<endl;

    return 0;
}

