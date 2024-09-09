#include <iostream>

using namespace std;

int main() {
    int year[365];
    float avg[12];
    int i, j;
    int total = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0,sum9=0, sum10 = 0, sum11 = 0, sum12 = 0;
  
    for (int i = 0; i < 365; i++) {
        year[i] = rand();
    }
    for (int i = 0; i < 365; i++) {
        
       /* cout <<"Day " << i+1<< " " << year[i] << endl;*/
        total = total + year[i];
        if (i >= 0 && i <= 30) {
            sum1 += year[i];
            
            avg[0] = float(sum1) / 31;
        }
        else if (i >= 31 && i <= 57) {
            sum2 += year[i];
     
            avg[1] = float(sum2) / 28;
        }
        else if (i >= 58 && i <= 88) {
            sum3 += year[i];
          
            avg[2] = float(sum3) / 31;
        }
        else if (i >= 89 && i <= 118) {
            sum4 += year[i];

            avg[3] = float(sum4) / 30;
        }
        else if (i >= 119 && i <= 149) {
            sum5 += year[i];
          
            avg[4] = float(sum5) / 31;
        }
        else if (i >= 150 && i <= 179) {
            sum6 += year[i];
        
            avg[5] = float(sum6) / 30;
        }
        else if (i >= 180 && i <= 210) {
            sum7 += year[i];
     
            avg[6] = float(sum7) / 31;
        }
        else if (i >= 211 && i <= 241) {
            sum8 += year[i];
    
            avg[7] = float(sum8) / 31;
        }
        else if (i >= 242 && i <= 272) {
            sum9 += year[i];
         
            avg[8] = float(sum9) / 30;
        }
        else if (i >= 273 && i <= 302) {
            sum10 += year[i];
           
            avg[9] = float(sum10) / 31;
        }
        else if (i >= 303 && i <= 332) {
            sum11 += year[i];
     
            avg[10] = float(sum11) / 30;
        }
        else if (i >= 333 && i <= 364) {
            sum12 += year[i];
          
            avg[11] = float(sum12) / 31;
        }
        
    }
    int highest = year[0];
    for (int i = 0; i < 365; i++) {
        if (year[i] > highest)
        {
            highest = year[i];
        }
        
    }
    int lowest = year[0];
    for (int i = 0; i < 365; i++) {
        if (year[i] < lowest)
        {
            lowest = year[i];
        }

    }
        cout << "Total is " << total << endl;
        cout << "Highest is : " << highest << endl;
        cout << "Lowest is : " << lowest << endl;
        
        //cout << "Average of Month 1 " <<  " = " << avg1<<endl;
        //cout << "Average of Month 2 " << " = " << avg2 << endl;
        //cout << "Average of Month 3 " << " = " << avg3 << endl;
        //cout << "Average of Month 4 " << " = " << avg4 << endl;
        //cout << "Average of Month 5 " << " = " << avg5 << endl;
        //cout << "Average of Month 6 " << " = " << avg6 << endl;
        //cout << "Average of Month 7 " << " = " << avg7 << endl;
        //cout << "Average of Month 8 " << " = " << avg8 << endl;
        //cout << "Average of Month 9 " << " = " << avg9 << endl;
        //cout << "Average of Month 10 " << " = " << avg10 << endl;
        //cout << "Average of Month 11 " << " = " << avg11 << endl;
        //cout << "Average of Month 12 " << " = " << avg12 << endl;
        for (i = 0; i < 12; i++) {
            cout << "Average of Month "<< i << " = " << avg[i] << endl;
        }
    

}
