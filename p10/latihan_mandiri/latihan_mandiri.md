# Latihan Mandiri P10

## Latihan 1 — Pencarian NPM

### Soal

Membuat fungsi `int cariNpm(const string npm[], int jumlah, string dicari)` untuk mencari data mahasiswa berdasarkan NPM. Program meminta pengguna memasukkan NPM secara berulang sampai mengetik `selesai`. Jika NPM ditemukan, program menampilkan data mahasiswa tersebut. Jika tidak ditemukan, program menampilkan pesan bahwa NPM tidak ditemukan.

### File

`latihan1_cari_npm.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: NPM `2024010101`.
- Hasil: Data mahasiswa Siti Aminah berhasil ditemukan.

Pengujian 2:
- Input: NPM yang tidak terdapat dalam data mahasiswa.
- Hasil: Program menampilkan pesan bahwa NPM tidak ditemukan.

Pengujian 3:
- Input: `selesai`.
- Hasil: Program menghentikan proses pencarian.

### Catatan

Fungsi `cariNpm()` digunakan untuk mencari NPM mahasiswa di dalam array secara berurutan (Sequential Search). Jika NPM ditemukan, fungsi mengembalikan indeks data mahasiswa tersebut. Jika tidak ditemukan, fungsi mengembalikan nilai `-1`. Dengan cara ini, pencarian dapat dilakukan berulang kali tanpa harus menulis proses pencarian dari awal.

---

## Latihan 2 — Menghapus Elemen Array

### Soal

Membuat fungsi `void geserKiri(double nilai[], int& jumlah, int indeks)` untuk menghapus elemen array berdasarkan indeks yang dipilih. Elemen setelah indeks tersebut digeser satu posisi ke kiri, kemudian jumlah elemen dikurangi satu.

### File

`latihan2_geser_kiri.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: Nilai 80, 75, 90, 85, dan 70.
- Indeks yang dihapus: 2.
- Output:

```text
Data sebelum dihapus:
[0] 80
[1] 75
[2] 90
[3] 85
[4] 70

Data setelah dihapus:
[0] 80
[1] 75
[2] 85
[3] 70

Jumlah elemen sekarang: 4
```

### Catatan

Fungsi `geserKiri()` digunakan untuk menghapus elemen array dengan cara menggeser elemen setelahnya ke kiri. Parameter `jumlah` menggunakan reference (`&`) karena jumlah elemen harus berubah langsung pada variabel asal. Sedangkan array `nilai` tidak memerlukan tanda `&` karena fungsi sudah dapat mengakses dan mengubah isi array aslinya.

---

## Latihan 3 — Menghitung Median

### Soal

Membuat fungsi `double median(const double nilai[], int jumlah)` untuk menghitung nilai tengah dari sekumpulan angka. Sebelum menghitung median, isi array disalin ke array lokal, kemudian diurutkan dari nilai terkecil ke terbesar.

### File

`latihan3_median.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: 10, 50, 20, 40, dan 30.
- Output:

```text
Data sebelum diurutkan:
10 50 20 40 30

Nilai median: 30

Data asli setelah fungsi median dijalankan:
10 50 20 40 30
```

### Catatan

Fungsi `median()` digunakan untuk mencari nilai tengah setelah data diurutkan. Karena parameter `nilai` menggunakan `const`, isi array asli tidak boleh diubah. Oleh karena itu, data disalin terlebih dahulu ke array lokal untuk proses pengurutan. Dengan cara ini, median dapat dihitung tanpa mengubah urutan data asli.

---

## Latihan 4 — Bubble Sort

### Soal

Mengubah metode pengurutan Selection Sort menjadi Bubble Sort dengan membandingkan dua elemen yang berdekatan dan menukarnya apabila urutannya belum sesuai. Kemudian membandingkan jumlah pertukaran yang dilakukan oleh kedua metode menggunakan data nilai akhir dari `contoh_masukan.txt`.

### File

`latihan4_bubble_sort.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: 83.97, 67.75, 49.50, 90.00, 71.00, dan 25.75.
- Output:

```text
Hasil Selection Sort:
90.00 83.97 71.00 67.75 49.50 25.75
Jumlah pertukaran Selection Sort: 3

Hasil Bubble Sort:
90.00 83.97 71.00 67.75 49.50 25.75
Jumlah pertukaran Bubble Sort: 5
```

### Catatan

Selection Sort mencari nilai terbesar dari bagian array yang belum terurut, kemudian menukarnya ke posisi yang sesuai. Sedangkan Bubble Sort membandingkan dua elemen yang berdekatan dan menukarnya apabila urutannya salah. Kedua metode menghasilkan urutan yang sama, tetapi jumlah pertukarannya berbeda. Pada pengujian ini, Selection Sort melakukan 3 pertukaran, sedangkan Bubble Sort melakukan 5 pertukaran.

---

## Latihan 5 — Parkir Kampus Menggunakan Array

### Soal

Mengembangkan program UTS Parkir Kampus dengan menyimpan seluruh transaksi kendaraan ke dalam array, kemudian menampilkan transaksi berdasarkan biaya parkir dari yang terbesar ke terkecil. Program tetap mempertahankan proses validasi plat nomor, jenis kendaraan, durasi parkir, perhitungan biaya, rekap pendapatan, dan sebaran jenis kendaraan. Membuat bagan hierarki fungsi sebelum melakukan pengembangan program.

### File

`latihan5_parkir_kampus.cpp`

### Hasil Pengujian

Program berhasil dikompilasi dan dijalankan menggunakan `contoh_masukan.txt` dari UTS Parkir Kampus tanpa error dan warning.

Hasil pengurutan transaksi:

| Plat Nomor | Jenis | Biaya |
|---|---|---:|
| DA 5678 AB | Mobil | 30000 |
| KT 9 Z | Mobil | 5000 |
| B 1234 XY | Motor | 4000 |
| B 4321 CD | Motor | 3000 |

Hasil rekap:

```text
=== Rekap Hari Ini ===
Jumlah kendaraan : 4
Motor            : 2
Mobil            : 2
Total pendapatan : 42000
Rata-rata biaya  : 10500.00
Tertinggi        : DA 5678 AB (30000)

Sebaran jenis:
Motor | ## 2
Mobil | ## 2
```

### Catatan

Program Parkir Kampus yang sebelumnya hanya memproses satu kendaraan setiap kali perulangan dikembangkan agar dapat menyimpan seluruh transaksi menggunakan array. Data plat, jenis, durasi, dan biaya disimpan dalam array yang saling berpasangan. Pengurutan dilakukan menggunakan Bubble Sort berdasarkan biaya parkir dari terbesar ke terkecil. Saat terjadi pertukaran, seluruh array ikut ditukar agar data kendaraan tetap sesuai. Dengan menggunakan array dan fungsi, program dapat menyimpan, mengurutkan, dan menampilkan seluruh transaksi dengan lebih terstruktur.