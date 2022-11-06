#include <iostream>
#include <ctime>
using namespace std;
int main()
{
/*const int n = 10;
   int mas[n];
   srand(time(nullptr));
   for (int i = 0; i < n; i++) {
       mas[i] = rand() % 51 - 25;
       cout << mas[i] << endl;
   }
       int k = 0;
   for (int i = 0; i < n; i++) {
       if (mas[i] > 0) {
           k += 1;
       }
   }
   cout << k << endl;*/
    //cam1
   /* const int n = 10;
    int mas[n];
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 31 - 10;
        cout << mas[i] << endl;
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] % 2 == 0) {
            k = k+mas[i];
        }
    }
    cout <<"sum"<<" " << k << endl;*/
    //cam 2
    /*const int n = 10;
    int mas[n];
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 101 - 50;
        cout << mas[i] << endl;
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] < 0) {
            k += 1;
        }
    }
    cout << "kolichestvo" << " " << k << endl;*/
    //cam 3
   /* const int n = 10;
    int mas[n];
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 41 - 20;
        cout << mas[i] << endl;
    }
    int k = 1;
    for (int i = 0; i < n; i++) {
        if (mas[i] % 5 != 0) {
            k = k * mas[i];
        }
    }
    cout << "proisvedinia" << " " << k << endl;*/
    //cam4
   /* const int n = 10;
    int mas[n];
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 21 - 5;
        cout << mas[i] << endl;
    }
    int k = 0;
    int a = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] % 5 != 0 || mas[i] % 3 != 0) {
            k = k + mas[i];
            a = a + 1;
        }
    }
    k = k / a;
    cout << "crednie" << " " << k << endl;*/
    //cam 5
   /* const int n = 10;
    int mas[n];
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 15;
        cout << mas[i] << endl;
    }
    int k = 1;
    for (int i = 0; i < n; i+=2) {
        k = k * mas[i];
    }
    double a = sqrt(k);
    cout << a << endl;*/






    return 0;
}

