#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");
    int n, min_stolb, max_stolb = 0;
    cout << "���������� ��������: ";
    cin >> n;
    int mas[n];
    for (int i=0; i<n; ++i){
        cout << "������ " << i+1 << " �������: ";
        cin >> mas[i];
    }
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            if (mas[j]<mas[i]){
                min_stolb=mas[j];
            } else {
                min_stolb=mas[i];
            }
            if (min_stolb*(j-i)>=max_stolb){
                max_stolb = min_stolb*(j-i);
            }
        }
    }
    cout << "������������ �������: " <<  max_stolb;
    return 0;
}
