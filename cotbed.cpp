#include <bits/stdc++.h> 
using namespace std; 
  
void pattern(int nos, int i, int space) 
{ 
    char prt = '+'; 
    int s, j; 
  
    for (s = nos; s >= 1; s--) 
    { 
        cout <<" "; 
    } 
  
    for (j = 1; j <= i; j++)  
    { 
        if (space != 0)  
        { 
            if (i == 9 && j == 1)  
            { 
                continue; 
            } 
        } 
        if (i == 1 || i == 9) 
        { 
            cout << prt; 
        } 
        else if (j == 1 || j == i) 
        { 
            cout << prt; 
        } 
        else
        { 
            cout <<" "; 
        } 
    } 
} 
   
int main() 
{ 
    int i, nos = 0, nosp = -1, nbsp = -1; 
    for (i = 9; i >= 1; (i = i - 2)) 
    { 
  
        pattern(nos, i, 0); 
   
        pattern(nosp, i, 1); 
  
        pattern(nbsp, i, 1); 
  
        cout << endl; 
        nos++; 
        nosp = nosp + 2; 
        nbsp = nbsp + 2; 
    } 
  
    nos = 3, nosp = 5, nbsp = 5; 
  
    for (i = 3; i <= 9; (i = i + 2)) 
    { 
  
        pattern(nos, i, 0); 
  
        pattern(nosp, i, 1); 
   
        pattern(nbsp, i, 1); 
  
        cout << endl;
        nos--; 
        nosp = nosp - 2; 
        nbsp = nbsp - 2; 
    } 
  
    return 0; 
} 
  

