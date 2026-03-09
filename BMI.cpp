#include <iostream>
using namespace std;

float hitungBMI(float berat,float tinggi){
    return berat/(tinggi*tinggi);
}

string Status_BMI(float BMI){
    if (BMI < 18,5){
        return "berat badan kurang";
    }
    else if(BMI < 25){
        return "berat badan normal";
    }
    
}

int main(){
    float nilBI,nilMT,rerata;
    string status;
    

    cout <<"masukan nilai bahasa inggris = ";
    cin >> nilBI;
    cout <<"masukan nilai matematika = ";
    cin >> nilMT;
    
    rerata = Rata_rata(nilBI,nilMT);

    cout << "Status kelulusan = "<<Status_lulus(rerata)<<" ,dengan nilai rerata = "<<rerata<<endl;

}