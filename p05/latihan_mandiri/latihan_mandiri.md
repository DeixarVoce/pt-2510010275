# Latihan Mandiri P05

## Latihan 1 — Jumlah Bilangan 1 sampai n

### Soal

Membuat program untuk menghitung jumlah bilangan dari 1 sampai n menggunakan perulangan.

### File

`latihan1_jumlah.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: n = 1
- Output: Jumlah dari 1 sampai 1 = 1

Pengujian 2:
- Input: n = 4
- Output: Jumlah dari 1 sampai 4 = 10

Pengujian 3:
- Input: n = 100
- Output: Jumlah dari 1 sampai 100 = 5050

### Catatan

Variabel `total` digunakan untuk menyimpan hasil penjumlahan.
Perulangan `for` dimulai dari i = 1 sampai i <= n.
Pada setiap putaran, nilai i ditambahkan ke total, kemudian
i bertambah satu melalui i++.

## Latihan 2 — Menghitung Mundur

### Soal

Membuat program untuk menghitung mundur dari n sampai 1, lalu menampilkan tulisan "Mulai!".

### File

`latihan2_mundur.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: n = 5
- Output:

  ```text
  5
  4
  3
  2
  1
  Mulai!
  ```

### Catatan

Perulangan `for` dimulai dari i = n, berjalan selama i >= 1,
dan menggunakan `i--` untuk mengurangi nilai i sebanyak satu
pada setiap putaran. Setelah perulangan selesai, program
menampilkan tulisan "Mulai!".

## Latihan 3 — Mencari Nilai Tertinggi

### Soal

Membuat program untuk membaca nilai sampai pengguna memasukkan angka negatif, kemudian menampilkan nilai tertinggi yang dimasukkan.

### File

`latihan3_tertinggi.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: 70, 85, 90, -1
- Output: Nilai tertinggi: 90

### Catatan

Perulangan `while` berjalan selama nilai yang dimasukkan tidak negatif.
Variabel `tertinggi` diawali dengan -1, kemudian diperbarui jika
ditemukan nilai yang lebih besar. Angka negatif digunakan sebagai
penanda untuk menghentikan input.

## Latihan 4 — Menghitung Pilihan Menu Tidak Valid

### Soal

Memodifikasi program menu dengan `do-while` agar menghitung jumlah pilihan yang tidak tersedia dan menampilkan jumlahnya saat pengguna keluar.

### File

`latihan4_menu.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: 9, 0, 3
- Output: Jumlah pilihan tidak valid: 2

### Catatan

Variabel `jumlah_tidak_valid` digunakan sebagai penghitung.
Setiap kali pengguna memilih menu yang tidak tersedia,
nilai penghitung bertambah satu menggunakan `jumlah_tidak_valid++`.
Jumlah pilihan tidak valid ditampilkan setelah pengguna memilih 3
untuk keluar dari menu.

## Latihan 5 — Tabel Perkalian

### Soal

Membuat program untuk menampilkan tabel perkalian dari 1 sampai n menggunakan dua perulangan `for` bersarang (*nested for*).

### File

`latihan5_perkalian.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: n = 3
- Output:
  - 1 x 1 = 1
  - 1 x 2 = 2
  - 1 x 3 = 3
  - 2 x 1 = 2
  - 2 x 2 = 4
  - 2 x 3 = 6
  - 3 x 1 = 3
  - 3 x 2 = 6
  - 3 x 3 = 9

### Catatan

Perulangan `i` merupakan perulangan luar, sedangkan `j`
merupakan perulangan dalam. Untuk setiap nilai `i`, perulangan
`j` berjalan dari 1 sampai n. Hasil perkalian ditampilkan
menggunakan `i * j`.