#include <iostream>

bool leap_year(int year){
    bool ly;

    if( (year % 4) == 0){ 

        if( (year % 100) == 0){ 
            if( (year % 400) == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{ 
            ly = true;

        }
    }
    else{
        ly = false; 
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1
    if (d1 == 31 && m1 != 12){
        d2 = 1;
        m2 = m1 + 1;
        y1 = y2;
    }
    else if (d1 == 31 && m1 == 12){
        d2 = 1;
        m2 = 1;
        y2 = y1 + 1;
    }
    else if (d1 == 30 && ( m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)){
        d2 = 1;
        m2 = m1 + 1;
        y1 = y2;
    }
    else if (d1 == 28 && m1 == 2){
        if (leap_year(y1)){
            d2 = 29;
            m2 = 2;
            y2 = y1;
        }
        else {
            d2 = 1;
            m2 = 3;
            y2 = y1;
        }
    }
    else {
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
}

int main(){
    // TODO: write a main to test the function
    int d1, m1, y1, d2, m2, y2;
    std::cout << "Please enter a date in dd/mm/yyyy format: " << std::endl;
    std::cin >> d1 >> m1 >> y1;

    next_date(d1,m1,y1,d2,m2,y2);

    std::cout << "Tomorrow's date is: " << d2 << "/" << m2 << "/" << y2 << std::endl;
}