// gpt

// #include <iostream>
// #include <string>

// using namespace std;

// // // Mảng Thiên Can
// string can[] = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
// // // Mảng Địa Chi
// string chi[] = {"Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui"};

// string nguHanh[] = {"Kim", "Thuy", "Hoa", "Tho", "Moc"};

// int main() {
//     int nam;
//     cout << "Nhap nam sinh: ";
//     cin >> nam;

//     // Tính Thiên Can và Địa Chi
//     string namCan = can[nam % 10];
//     string namChi = chi[nam % 12];
//     string hanh = nguHanh[nam % 10];

//     // Xuất kết quả
//     cout << "Nam sinh " << nam << " la: " << namCan << " " << namChi << endl;
//     cout << "Menh " << hanh << endl;

//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

// Thien Can - Giap At Binh Dinh Mau Ky Canh Tan Nham Quy
string can[] = {"Mau", "Ky", "Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh"};
// Dia Chi - 12 con giap
string chi[] = {"Dan", "Meo", "Thin", "Ty", "Ngo", "Mui", "Than", "Dau", "Tuat", "Hoi", "Ty", "Suu"};

string nguHanh[] = {
    "Tho",    // Thành Đầu Thổ (bắt đầu từ đây)
    "Kim",    // Bạch Lạp Kim
    "Moc",    // Dương Liễu Mộc
    "Thuy",   // Tuyền Trung Thủy
    "Tho",    // Ốc Thượng Thổ
    "Hoa",    // Tích Lịch Hỏa
    "Moc",    // Tùng Bách Mộc
    "Thuy",   // Trường Lưu Thủy
    "Kim",    // Sa Trung Kim
    "Hoa",    // Sơn Hạ Hỏa
    "Moc",    // Bình Địa Mộc
    "Thuy",   // Bích Thượng Thủy
    "Kim",    // Kim Bạch Kim
    "Hoa",    // Phủ Đăng Hỏa
    "Thuy",   // Thiên Hà Thủy
    "Tho",    // Đại Dịch Thổ
    "Kim",    // Thoa Xuyến Kim
    "Moc",    // Tang Đố Mộc
    "Thuy",   // Đại Khê Thủy
    "Tho",    // Sa Trung Thổ
    "Hoa",    // Thiên Thượng Hỏa
    "Moc",    // Thạch Lựu Mộc
    "Thuy",   // Đại Hải Thủy
    "Kim",    // Hải Trung Kim
    "Hoa",    // Lư Trung Hỏa
    "Moc",    // Đại Lâm Mộc
    "Tho",    // Lộ Bàng Thổ
    "Kim",    // Kiếm Phong Kim
    "Hoa",    // Sơn Đầu Hỏa
    "Thuy"    // Giản Hạ Thủy
};

string napAm[] = {
    "Thanh Dau Tho", "Thanh Dau Tho",         // Mậu Dần, Kỷ Mão (bắt đầu từ đây)
    "Bach Lap Kim", "Bach Lap Kim",           // Canh Thìn, Tân Tỵ
    "Duong Lieu Moc", "Duong Lieu Moc",       // Nhâm Ngọ, Quý Mùi
    "Tuyen Trung Thuy", "Tuyen Trung Thuy",   // Giáp Thân, Ất Dậu
    "Oc Thuong Tho", "Oc Thuong Tho",         // Bính Tuất, Đinh Hợi
    "Tich Lich Hoa", "Tich Lich Hoa",         // Mậu Tý, Kỷ Sửu
    "Tong Bach Moc", "Tong Bach Moc",         // Canh Dần, Tân Mão
    "Truong Luu Thuy", "Truong Luu Thuy",     // Nhâm Thìn, Quý Tỵ
    "Sa Trung Kim", "Sa Trung Kim",           // Giáp Ngọ, Ất Mùi
    "Son Ha Hoa", "Son Ha Hoa",               // Bính Thân, Đinh Dậu
    "Binh Dia Moc", "Binh Dia Moc",           // Mậu Tuất, Kỷ Hợi
    "Bich Thuong Thuy", "Bich Thuong Thuy",   // Canh Tý, Tân Sửu
    "Kim Bach Kim", "Kim Bach Kim",           // Nhâm Dần, Quý Mão
    "Phu Dang Hoa", "Phu Dang Hoa",           // Giáp Thìn, Ất Tỵ
    "Thien Ha Thuy", "Thien Ha Thuy",         // Bính Ngọ, Đinh Mùi
    "Dai Dich Tho", "Dai Dich Tho",           // Mậu Thân, Kỷ Dậu
    "Thoa Xuyen Kim", "Thoa Xuyen Kim",       // Canh Tuất, Tân Hợi
    "Tang Do Moc", "Tang Do Moc",             // Nhâm Tý, Quý Sửu
    "Dai Khe Thuy", "Dai Khe Thuy",           // Giáp Dần, Ất Mão
    "Sa Trung Tho", "Sa Trung Tho",           // Bính Thìn, Đinh Tỵ
    "Thien Thuong Hoa", "Thien Thuong Hoa",   // Mậu Ngọ, Kỷ Mùi
    "Thach Luu Moc", "Thach Luu Moc",         // Canh Thân, Tân Dậu
    "Dai Hai Thuy", "Dai Hai Thuy",           // Nhâm Tuất, Quý Hợi
    "Hai Trung Kim", "Hai Trung Kim",         // Giáp Tý, Ất Sửu
    "Lu Trung Hoa", "Lu Trung Hoa",           // Bính Dần, Đinh Mão
    "Dai Lam Moc", "Dai Lam Moc",             // Mậu Thìn, Kỷ Tỵ
    "Lo Bang Tho", "Lo Bang Tho",             // Canh Ngọ, Tân Mùi
    "Kiem Phong Kim", "Kiem Phong Kim",       // Nhâm Thân, Quý Dậu
    "Son Dau Hoa", "Son Dau Hoa",             // Giáp Tuất, Ất Hợi
    "Gian Ha Thuy", "Gian Ha Thuy"            // Bính Tý, Đinh Sửu
};



int main() {
    int namSinh;
    cin >> namSinh;
    // hieu chinh
    // int namSinh_Can = ((namSinh%10)<8)?(namSinh%10 + 10):namSinh%10;
    // int namSinh_Chi = ((namSinh%12)<6)?(namSinh%12 + 12):namSinh%12;
    // string namCan = can[namSinh_Can - 8];
    // string namChi = chi[namSinh_Chi - 6];

    // make sure index is always positive.
    string namCan = can[(namSinh%10 - 8 + 10)%10];
    string namChi = chi[(namSinh%12 - 6 + 12)%12];
    string namHanh = nguHanh[((namSinh%60 - 18 + 60)%60)/2];
    string namNapAm = napAm[(namSinh%60 - 18 + 60)%60];
    cout << namCan << " " << namChi << endl;
    cout << "Hanh " << namHanh << endl;
    cout << "Nap Am " << namNapAm << endl;
    return 0;
}