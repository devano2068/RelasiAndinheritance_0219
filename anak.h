#ifndef ANAK_H
#define ANAK_H


class anak {
public:
    string nama;
    // konstruktor
    anak(string pNama) :nama(pNama)
    {
        cout << "Anak \"" << nama << "\" ada\n";
    }
    // destruktor
    ~anak()
    {
        cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};
#endif
