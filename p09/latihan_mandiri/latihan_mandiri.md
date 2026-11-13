# Latihan Mandiri P09

## Latihan 1 — Bilangan Prima

### Soal

Membuat fungsi `bool prima(int n)` untuk memeriksa apakah suatu angka termasuk bilangan prima, kemudian menggunakan fungsi tersebut untuk mencetak semua bilangan prima dari 2 sampai 100.

### File

`latihan1_bilangan_prima.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: Tidak ada (program langsung menjalankan pemeriksaan).
- Output:

```text
Bilangan prima dari 2 sampai 100:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
```

### Catatan

Fungsi prima() digunakan untuk memeriksa apakah suatu angka termasuk bilangan prima. Fungsi ini cukup dibuat satu kali, kemudian bisa digunakan untuk memeriksa angka lainnya. Dibandingkan latihan Pertemuan 6, bagian main() menjadi lebih singkat karena proses pemeriksaan tidak perlu ditulis berulang kali.

---

## Latihan 2 — Statistik

### Soal

Membuat fungsi `statistik()` untuk mencari nilai terbesar, nilai terkecil, dan rata-rata dari tiga angka menggunakan pass by reference. Kemudian membuat fungsi lain yang menggunakan `return` untuk menghasilkan rata-rata saja.

### File

`latihan2_statistik.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: 80, 70, dan 90.
- Output:

```text
Hasil Statistik:
Nilai terbesar : 90
Nilai terkecil : 70
Rata-rata      : 80

Rata-rata menggunakan return: 80
```

### Catatan

Fungsi statistik() digunakan untuk mencari nilai terbesar, terkecil, dan rata-rata dari tiga angka. Dengan menggunakan reference (&), hasil perhitungan bisa langsung disimpan ke variabel yang digunakan sebelumnya. Sedangkan return digunakan untuk mengirimkan satu hasil kembali dari fungsi. Jadi, kita bisa menggunakan cara yang berbeda sesuai dengan jumlah hasil yang ingin diperoleh.

## Latihan 3 — Mengulang Teks

### Soal

Membuat fungsi `ulang(string teks, int kali)` untuk mengulang sebuah teks sesuai jumlah yang ditentukan. Fungsi ini juga digunakan untuk menggantikan perulangan dalam `cetakSebaran()` agar proses mencetak tanda `#` menjadi lebih sederhana.

### File

`latihan3_ulang_teks.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: Tidak ada (program langsung menjalankan fungsi).
- Output:

```text
Contoh pengulangan teks:
#####

Sebaran huruf mutu:
A | ## 2
B | # 1
C | # 1
D | # 1
E | # 1
```

### Catatan

Fungsi `ulang()` digunakan untuk mengulang teks sesuai jumlah yang diinginkan. Dengan fungsi ini, kita tidak perlu menulis perulangan lagi setiap kali ingin menampilkan teks berulang. Pada bagian `cetakSebaran()`, fungsi tersebut digunakan untuk menampilkan tanda `#` sesuai jumlah huruf mutu sehingga kode menjadi lebih sederhana dan mudah dipahami.


## Latihan 4 — Refactoring Program Parkir Kampus

### Soal

Refactor program UTS Parkir Kampus menjadi beberapa fungsi seperti pada program SiNilai v0.7. Buat bagan hierarki fungsi terlebih dahulu sebelum melakukan refactoring.

### File

`latihan4_refactoring.cpp`

### Hasil Pengujian

Program berhasil dijalankan dengan 2 kendaraan:

- Kendaraan pertama: AB 123 CD, Motor, 2 jam.
- Kendaraan kedua: DA 5678 AB, Mobil, 24 jam.

Hasil rekap:
```text
Jumlah kendaraan : 2
Motor            : 1
Mobil            : 1
Total pendapatan : 33000
Rata-rata biaya  : 16500.00
Tertinggi        : DA 5678 AB (30000)

Sebaran jenis:
Motor | # 1
Mobil | # 1
```

### Catatan

Program Parkir Kampus yang sebelumnya ditulis dalam satu fungsi `main()` dipecah menjadi beberapa fungsi sesuai tugasnya. Ada fungsi untuk membaca data, memvalidasi input, menghitung biaya, menampilkan kendaraan, dan membuat rekap. Dengan pembagian ini, kode menjadi lebih terstruktur dan lebih mudah dipahami. Fungsi yang menggunakan reference (`&`) juga dapat memperbarui nilai variabel yang digunakan di `main()`.



## Latihan 5 — Menghilangkan Variabel Global

### Soal

Buat program sederhana yang menggunakan variabel global, kemudian hilangkan variabel global tersebut dengan menggunakan parameter fungsi. Catat apa yang menjadi lebih jelas setelah perubahan.

### File

`latihan5_variabel_global.cpp`

### Hasil Pengujian

Program berhasil dikompilasi dan dijalankan tanpa warning.

Hasil pengujian:
```text
=== Pendapatan Parkir ===
Total pendapatan: Rp33000
```

### Catatan

Pada versi awal, variabel `total_pendapatan` dibuat sebagai variabel global sehingga bisa diubah oleh fungsi mana saja. Setelah diperbaiki, variabel tersebut dipindahkan ke dalam `main()` dan dikirim ke fungsi `tambahPendapatan()` menggunakan reference (`&`). Dengan begitu, kita bisa mengetahui fungsi mana yang mengubah nilai pendapatan. Kode menjadi lebih terstruktur dan mudah dipahami.

