#ifndef ANAK_H
#define ANAK_H

// Last Updated: 2023-10-25


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
