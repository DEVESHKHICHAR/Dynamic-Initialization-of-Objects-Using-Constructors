#include <iostream>
using namespace std;
class Bankdeposit{
      int principle;
      int years;
      int Rate;
      float rate;
      float returnvalue;
       public:
         Bankdeposit(){} // blank constructor just provide the objects an constructor to have ready run for
         Bankdeposit(int p, int y, int R){
            principle=p;
            years=y;
            returnvalue=p;
             for(int i=0; i<y; i++){
               returnvalue=returnvalue*(1+(float(R)/100));
             }
         }
         Bankdeposit(int p, int y, float r);
         void show(){

            cout<<"the principle amount deposited is:"<<principle<<" for "<<years<<" years "<<endl
            <<" the returnvalue at interest rate is: "<<returnvalue<<endl;
         }
};
Bankdeposit :: Bankdeposit(int p, int y, float r){
    returnvalue=p;
      for(int i=0; i<y; i++){  
        returnvalue=returnvalue*(1+r);  
      }  
        principle=p;
        years=y;
}
int main() {
    int p,y,R;
    float r;
    cout<<"entre the value principle, years, rate accordingly"<<endl;
    cin>>p>>y>>R>>r;
    Bankdeposit b1,b2, b3,b4;
    b1=Bankdeposit(p,y,R);
    b1.show();
    // b2=Bankdeposit(p,y,r);
    // b2.show();
    return 0;
}