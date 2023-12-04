#include <iostream>
#include <string>

using namespace std;

bool ky_tu_hien_tai(const string& str, char ch) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == ch) {
            return true;
        }
    }
    return false;
}

int main() {
    string nhap_Str;
    char tim_ky_tu;

    cout << "Nhap vao mot chuoi: ";
    getline(cin, nhap_Str);

    cout << "Nhap vao mot ky tu can tim: ";
    cin >> tim_ky_tu;

    if (ky_tu_hien_tai(nhap_Str, tim_ky_tu)) {
        cout << "Ky tu '" << tim_ky_tu << "' ton tai trong chuoi.";
    } else {
        cout << "Ky tu '" << tim_ky_tu << "' khong ton tai trong chuoi.";
    }

    return 0;
}
