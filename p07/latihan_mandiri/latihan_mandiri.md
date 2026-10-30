# Latihan Mandiri P07

## Latihan 1 — Mencari Kata Terpanjang

### Soal

Membaca sebuah kalimat menggunakan `getline()`, kemudian mencari dan mencetak kata yang memiliki jumlah karakter paling banyak dengan menelusuri kalimat huruf demi huruf sampai menemukan spasi.

### File

`latihan1_kata_terpanjang.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: Saya sedang belajar pemrograman
- Output:

  ```text
  Masukkan kalimat: Saya sedang belajar pemrograman
  Kata terpanjang: pemrograman
  ```

### Catatan

Perulangan `for` digunakan untuk membaca setiap karakter. Karakter dikumpulkan ke `kata_sekarang` sampai menemukan spasi, lalu panjangnya dibandingkan dengan `kata_terpanjang`. Kata terakhir juga diperiksa setelah perulangannya selesai.

## Latihan 2 — Menentukan Kata Palindrom

### Soal

Membaca sebuah kata, kemudian menentukan apakah kata tersebut sama ketika dibaca dari depan maupun belakang dengan membandingkan karakter pada kedua sisi.

### File

`latihan2_palindrom.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: katak
- Output: katak adalah palindrom.

Pengujian 2:
- Input: malam
- Output: malam adalah palindrom.

Pengujian 3:
- Input: buku
- Output: buku bukan palindrom.

Pengujian 4:
- Input: mobil
- Output: mobil bukan palindrom.

### Catatan

Perulangan `for` digunakan untuk membandingkan karakter dari depan dan belakang menggunakan `kata[i]` dan `kata[panjang - 1 - i]`. Pemeriksaannya cukup dilakukan sampai setengah panjang kata. Kalau ditemukan karakter berbeda, variabel `palindrom` akan jadi `false` dan perulangan dihentikan menggunakan `break`.

## Latihan 3 — Merapikan Spasi pada Nama

### Soal

Mengubah program `rapikan_nama.cpp` agar spasi ganda menjadi satu spasi, spasi di awal dan akhir dihilangkan, serta huruf pertama setiap kata menjadi kapital. Hasil perapian disimpan dalam `string` baru.

### File

`latihan3_rapikan_spasi.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: sITI aminah
- Output: Nama setelah dirapikan: Siti Aminah

Pengujian 2:
- Input: BUDI SANTOSO
- Output: Nama setelah dirapikan: Budi Santoso

Pengujian 3:
- Input: rina wati
- Output: Nama setelah dirapikan: Rina Wati

### Catatan

Variabel `hasil` digunakan untuk menyimpan nama yang sudah dirapikan. Perulangan `for`untuk memeriksa setiap karakter, menghilangkan spasi berlebih, dan mengatur huruf pertama setiap kata menjadi kapital menggunakan `toupper()`, sedangkan huruf lainnya menjadi kecil menggunakan `tolower()`.

## Latihan 4 — Validasi NPM

### Soal

Membaca NPM sebagai `string`, kemudian memeriksa apakah NPM terdiri dari tepat 10 karakter dan seluruh karakternya berupa angka menggunakan `isdigit()`. Jika tidak memenuhi syarat, program meminta input ulang sampai valid.

### File

`latihan4_validasi_npm.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: 123456789
- Output: NPM harus terdiri dari 10 karakter.

Pengujian 2:
- Input: 12345678901
- Output: NPM harus terdiri dari 10 karakter.

Pengujian 3:
- Input: 20240101ab
- Output: NPM hanya boleh berisi angka.

Pengujian 4:
- Input: 2024010101
- Output: NPM valid: 2024010101

### Catatan

`length()` digunakan untuk memeriksa jumlah karakter, sedangkan `isdigit()` memeriksa setiap karakter apakah berupa angka. Variabel `sah` digunakan sebagai penanda validasi, dan perulangan `do-while` meminta input ulang sampai NPM memenuhi semua syarat.

## Latihan 5 — Membuat Menu dengan Input Aman

### Soal

Membuat program menu yang membaca pilihan dengan aman. Input berupa huruf dan angka di luar rentang 1 sampai 3 harus ditolak, kemudian program meminta input ulang tanpa mengalami perulangan tanpa henti.

### File

`latihan5_menu_aman.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: abc
- Output: Itu bukan angka.

Pengujian 2:
- Input: 0
- Output: Pilihan harus antara 1 sampai 3.

Pengujian 3:
- Input: 4
- Output: Pilihan harus antara 1 sampai 3.

Pengujian 4:
- Input: 1
- Output: Halo! Selamat belajar C++.

Pengujian 5:
- Input: 2
- Output: Ini adalah program menu sederhana.

Pengujian 6:
- Input: 3
- Output: Program selesai.

### Catatan

Perulangan `do-while` digunakan untuk menampilkan menu sampai pengguna memilih 3. Validasi `cin.fail()` untuk memeriksa input bukan angka, sedangkan kondisi rentang menolak pilihan di luar 1 sampai 3. `cin.clear()` dan `cin.ignore()` digunakan untuk membersihkan input yang salah, kemudian `switch` menjalankan perintah sesuai yang dipilih pengguna.