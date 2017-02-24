#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>
#include <sstream>

using namespace std;
class przyblizanie{
    string li, czescCalkowita, czescPoPrzecniku;
    double liczba;
    int * cyfryPoPrzecinku = new int[100];
    int miejscePoPrzecinku; // do ktorego miejsca po przecinku przyblizyc
    int liczbaCzescPoPrzecinku;
    int liczbaCzescCalkowita;
    int liczbaCzescPoPrzecinkuPoZmianach;
    int ileCyfrPoPrzecinku;
    int pozycjaPrzecinka;
    int dlugoscCalejLiczby;
    int dlugoscPoPrzecinku;
public:
    przyblizanie(){
        miejscePoPrzecinku = 2;
        liczbaCzescPoPrzecinkuPoZmianach = 0;
    }
    przyblizanie(string l, int mPP){
        li = l;
        miejscePoPrzecinku = mPP;
        liczbaCzescPoPrzecinkuPoZmianach = 0;
    }
    przyblizanie(przyblizanie & p){
        li = p.li;
        miejscePoPrzecinku = p.miejscePoPrzecinku;
        liczbaCzescPoPrzecinkuPoZmianach = 0;
    }
    string getLi(){
        return li;
    }
    string getCzescCalkowita(){
        return czescCalkowita;
    }
    string getCzescPoPrzecinku(){
        return czescPoPrzecniku;
    }
    double getLiczba(){
        return liczba;
    }
    int * getCyfryPoPrzecinku(){
        return cyfryPoPrzecinku;
    }
    int getMiejscePoPrzecinku(){
        return miejscePoPrzecinku;
    }
    int getLiczbaCzescPoPrzecinku(){
        return liczbaCzescPoPrzecinku;
    }
    int getLiczbaCzescCalkowita(){
        return liczbaCzescCalkowita;
    }
    int getLiczbaPoPrzecinkuPoZmianach(){
        return liczbaCzescPoPrzecinkuPoZmianach;
    }
    int getIleCyfrPoPrzecinku(){
        return ileCyfrPoPrzecinku;
    }
    int getPozycjaPrzecinka(){
        return pozycjaPrzecinka;
    }
    int getDlugoscCalejLiczby(){
        return dlugoscCalejLiczby;
    }
    int getDlugoscPoPrzecinku(){
        return dlugoscPoPrzecinku;
    }
    void setLi(string l){
        li = l;
    }
    void setCzescCalkowita(string cC){
        czescCalkowita = cC;
    }
    void setCzescPoPrzecinku(string cPP){
        czescPoPrzecniku = cPP;
    }
    void setCyfryPoPrzecinku(int* cPP){
        cyfryPoPrzecinku = cPP;
    }
    void setLiczba(double l){
        liczba = l;
    }
    void setMiejscePoPrzecinku(int mPP){
        miejscePoPrzecinku = mPP;
    }
    void setLiczbaCzescPoPrzecinku(int lCPP){
        liczbaCzescPoPrzecinku = lCPP;
    }
    void setLiczbaCzescCalkowita(int l){
        liczbaCzescCalkowita = l;
    }
     void setLiczbaCzescPoPrzecinkuPoZmianach(int lCPPPZ){
        liczbaCzescPoPrzecinkuPoZmianach = lCPPPZ;
    }
    void setIleCyfrPoPrzecinku(int iCPP){
        ileCyfrPoPrzecinku = iCPP;
    }
    void setPozycjaPrzecinka(int pP){
        pozycjaPrzecinka = pP;
    }
    void setDlugoscCalejLiczby(int dCP){
        dlugoscCalejLiczby = dCP;
    }
    void setDlugoscPoPrzecinku(int dPP){
        dlugoscPoPrzecinku = dPP;
    }
    int obliczDlugoscCalejLiczby(){
        return li.size();
    }
    int obliczDlugoscPoPrzecinku(){
        return czescPoPrzecniku.size();
    }
    przyblizanie & wpiszCzescPoPrzecinku();
    przyblizanie & wpiszCzescCalkowita();
    przyblizanie & rozdzielNaCyfry();
    przyblizanie & sprawdzIPrzybliz();
    przyblizanie & zlaczCyfryPoPrzecinku();
    przyblizanie & przeksztalcNaWynik();
    przyblizanie & przybliz();
    void wypisz(){
    cout << liczba << endl;
    }
    przyblizanie & operator=(const przyblizanie & p){
    (*this).li = p.li;
    (*this).czescCalkowita = p.czescCalkowita;
    (*this).czescPoPrzecniku = p.czescPoPrzecniku;
    (*this).cyfryPoPrzecinku = p.cyfryPoPrzecinku;
    (*this).miejscePoPrzecinku = p.miejscePoPrzecinku;
    (*this).liczbaCzescPoPrzecinku = p.liczbaCzescPoPrzecinku;
    (*this).liczbaCzescCalkowita = p.liczbaCzescCalkowita;
    (*this).liczbaCzescPoPrzecinkuPoZmianach = p.liczbaCzescPoPrzecinkuPoZmianach;
    (*this).ileCyfrPoPrzecinku = p.ileCyfrPoPrzecinku;
    (*this).pozycjaPrzecinka = p.pozycjaPrzecinka;
    (*this).dlugoscCalejLiczby = p.dlugoscCalejLiczby;
    (*this).dlugoscPoPrzecinku = p.dlugoscPoPrzecinku;
    //return * this;
    }
};
przyblizanie & przyblizanie::wpiszCzescPoPrzecinku(){
for(int i = (*this).pozycjaPrzecinka + 1; i < (*this).dlugoscCalejLiczby; i++){
        (*this).czescPoPrzecniku += (*this).li[i];
    }
}
przyblizanie & przyblizanie::wpiszCzescCalkowita(){
for(int i = 0; i < (*this).pozycjaPrzecinka; i++){
        (*this).czescCalkowita += (*this).li[i];
        // cout << (*this).li[i];
    }
}
przyblizanie & przyblizanie::rozdzielNaCyfry(){
    int aTymczasowa = 0, bTymczasowa = 0;
    for(int i = (*this).dlugoscPoPrzecinku; i > 1;i--){
        //cout << i;
        (*this).cyfryPoPrzecinku[i] = (*this).liczbaCzescPoPrzecinku;

        for(int j = (*this).dlugoscPoPrzecinku; j >= i; j--){
            if(j == i)
                bTymczasowa = (*this).cyfryPoPrzecinku[i];
                (*this).cyfryPoPrzecinku[i] /= 10;
        }
        aTymczasowa = (*this).cyfryPoPrzecinku[i] * 10;
        (*this).cyfryPoPrzecinku[i] = bTymczasowa % aTymczasowa;
    }
    (*this).cyfryPoPrzecinku[1] = (*this).liczbaCzescPoPrzecinku /  pow(10,((*this).dlugoscPoPrzecinku - 1));
}
przyblizanie & przyblizanie::sprawdzIPrzybliz(){
    //int dPP = getDlugoscPoPrzecinku(); // dlugosc liczby po przecinku
    if((*this).dlugoscPoPrzecinku > (*this).miejscePoPrzecinku){
        for(int i = (*this).miejscePoPrzecinku + 1; i >= 1; i--){
            if(i > 1){
                if((*this).cyfryPoPrzecinku[i] >= 5){
                    (*this).cyfryPoPrzecinku[i] = 0;
                    (*this).cyfryPoPrzecinku[i - 1] += 1;
                }
            }
        else if (i == 1 && (*this).cyfryPoPrzecinku[i] >=5){
            (*this).cyfryPoPrzecinku[i] = 0;
           (*this).liczbaCzescCalkowita++;
        }
       // cout <<  (*this).cyfryPoPrzecinku[i] << "  ";
        }
    }
    /*else{
        for(int i = (*this).dlugoscPoPrzecinku; i > (*this).miejscePoPrzecinku; i--){
                cout << cyfryPoPrzecinku[i] << " ";
            (*this).cyfryPoPrzecinku[i] = 0;
        }
    }*/
}
przyblizanie & przyblizanie::zlaczCyfryPoPrzecinku(){
    if((*this).dlugoscPoPrzecinku % 2 != 0 && (*this).dlugoscPoPrzecinku != 1)
        (*this).liczbaCzescPoPrzecinkuPoZmianach = 1;
    if((*this).dlugoscPoPrzecinku > (*this).miejscePoPrzecinku){
        for(int i = 1; i <= (*this).miejscePoPrzecinku; i++){
            (*this).liczbaCzescPoPrzecinkuPoZmianach += ((*this).cyfryPoPrzecinku[i] * pow(10,((*this).dlugoscPoPrzecinku - i)));
            //cout <<   (*this).liczbaCzescPoPrzecinkuPoZmianach << " ";
        }
    }
    else{
        for(int i = 1; i <= (*this).dlugoscPoPrzecinku; i++){
            (*this).liczbaCzescPoPrzecinkuPoZmianach += ((*this).cyfryPoPrzecinku[i] * pow(10,((*this).dlugoscPoPrzecinku - i)));
            //cout <<   (*this).liczbaCzescPoPrzecinkuPoZmianach << " ";
        }
    }
}
przyblizanie & przyblizanie::przeksztalcNaWynik(){
    ostringstream b1,c1;
    b1 << (*this).liczbaCzescCalkowita;
    c1 << (*this).liczbaCzescPoPrzecinkuPoZmianach;
    string bb1 = b1.str();
    string cc1 = c1.str();
    string d = bb1 + "." + cc1;
    //cout << d ;
    (*this).liczba = atof(d.c_str());
    //cout << wynik;
}
przyblizanie & przyblizanie::przybliz(){
    (*this).setDlugoscCalejLiczby((*this).obliczDlugoscCalejLiczby());
    (*this).setPozycjaPrzecinka((*this).getLi().find("."));

    (*this).wpiszCzescPoPrzecinku();
    (*this).setDlugoscPoPrzecinku( (*this).obliczDlugoscPoPrzecinku());
    (*this).wpiszCzescCalkowita();

    int a = atoi((*this).getCzescPoPrzecinku().c_str());
    int b = atoi((*this).getCzescCalkowita().c_str());
    (*this).setLiczbaCzescPoPrzecinku(a);
    (*this).setLiczbaCzescCalkowita(b);

    (*this).rozdzielNaCyfry();
    (*this).sprawdzIPrzybliz();
    (*this).zlaczCyfryPoPrzecinku();
    (*this).przeksztalcNaWynik();
}
int main()
{
    string n = "1.123459";
    int l = 3;
    przyblizanie p1(n,l);
    p1.przybliz();
    p1.wypisz();

    return 0;
}
