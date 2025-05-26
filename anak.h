#ifndef ANAK_H
#define ANAK_H

// version: 1.0.0.0


class anak {
public:
    string nama; // Menyimpan nama anak
    anak(string pNama) :nama(pNama)
    {
        cout << "Anak \"" << nama << "\" ada\n";
    }
    ~anak()
    {
        cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};
#endif
