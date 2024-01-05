#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N,double B[]){
  double sum = 0, sumsquare = 0,wtf = 1,lol = 0;
  double AM , SD , GM , HM , max=0,min=INFINITY;  
  
  int i = 0;
  
  while(i < N){
    sum += A[i];
    sumsquare += pow(A[i],2); 
    wtf *= A[i]; 
    lol += 1/A[i];
    i++ ;
  }
  for(int i=1;i<N;i++){
    if(A[i]>max) max=A[i];
    if(A[i]<min) min=A[i];
  }
  AM = sum/N;
  B[0] = AM;
  
  SD = sqrt((sumsquare/N)-(pow(AM,2)));
  B[1] = SD;
  
  GM = exp(log(wtf)/N);
  B[2] = GM;
  
  HM = N/lol;
  B[3] = HM;

  B[4] = max;
  B[5] = min;
  }