// mencari rata-rata dari suatu array

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double arr[100000];
    int n;
    cout << "Masukkan banyak bilangan: ";
    cin >> n;
    cout << "Masukkan data nilai: " << endl;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    // basecase
    double minimum = arr[0], maximum = arr[0];
    double sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
        if (minimum > arr[i])
            minimum = arr[i];
        if (maximum < arr[i])
            maximum = arr[i];
    }
    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;
    cout << "Rata - rata: " << fixed << setprecision(2)<< (sum / (double) n) << endl;

    return 0;
}