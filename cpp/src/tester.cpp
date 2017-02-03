#include <stdlib.h>
#include <iostream>

using namespace std;

void processTemperature();
int * copyElements();

main()
{
   //int * thisArray = copyElements();
   int * thisArray = (int*)malloc(sizeof(int));

   thisArray = copyElements();

   for(int i=0; i<sizeof(thisArray); i++){
     cout << thisArray[i] << "\n";
   }

   cout << "Processing temperature" << endl;
   processTemperature();

   return (0);
}

void processTemperature(){
   for (int celsius = 0; celsius < 100; celsius++){
     cout << "Celsius: " << celsius <<
            " Fahrenheit: " << ((celsius * 9) / 5 + 32) << endl;
   }
}

int * copyElements()
{
   int array1[10] = {0,1,2,3,4,5,6,7,8,9};
   int * array2 = (int*)malloc(sizeof(int));

   for(int i=0; i<=10; ++i){
     array2[i] = array1[i];
   }

   return array2;
   
}
