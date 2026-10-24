# Latihan Mandiri P06

## Latihan 1 — Segitiga Bintang

### Soal

Mencetak segitiga bintang setinggi n, dimulai dari satu bintang hingga n bintang, lalu mencetak kembali segitiga secara terbalik dari n bintang hingga satu bintang.

### File

`latihan1_segitiga.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: n = 4
- Output:

  ```text
  *
  **
  ***
  ****
  ****
  ***
  **
  *
  ```

### Catatan

Perulangan bersarang digunakan untuk mencetak bintang pada setiap baris. Perulangan luar mengatur jumlah baris, sedangkan perulangan dalam mengatur jumlah bintang pada setiap baris. Pada segitiga pertama, jumlah baris bertambah menggunakan `baris++`. Pada segitiga kedua, jumlah baris berkurang menggunakan `baris--`.

## Latihan 2 — Menentukan Bilangan Prima

### Soal

Membaca bilangan bulat n, kemudian menentukan apakah n merupakan bilangan prima dengan mencoba pembagi dari 2 sampai n - 1. Perulangan dihentikan menggunakan break ketika ditemukan pembagi.

### File

`latihan2_prima.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: n = 7
- Output: 7 adalah bilangan prima.

Pengujian 2:
- Input: n = 0
- Output: 0 bukan bilangan prima.

Pengujian 3:
- Input: n = 9
- Output: 9 bukan bilangan prima.

Pengujian 4:
- Input: n = 1
- Output: 1 bukan bilangan prima.

### Catatan

Variabel bool `prima` digunakan sebagai bendera untuk menyimpan status bilangan. Program memeriksa pembagi menggunakan perulangan `for` dan operator `%`. Jika ditemukan pembagi yang menghasilkan sisa 0, `prima` diubah menjadi false dan `break` menghentikan perulangan. Bilangan yang kurang dari atau sama dengan 1 dinyatakan bukan bilangan prima.

## Latihan 3 — Rata-rata Nilai yang Sah

### Soal

Membaca n nilai, menghitung rata-rata hanya dari nilai yang berada pada rentang 0 sampai 100, serta menghitung jumlah data yang tidak sah menggunakan continue.

### File

`latihan3_rata_rata.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: n = 5, nilai = 80, 120, -5, 60, 50
- Output:
  - Jumlah data tidak sah: 2
  - Rata-rata nilai sah: 63.3333

### Catatan

Variabel `total` menyimpan jumlah seluruh nilai yang sah, sedangkan `banyak_sah` menghitung jumlah nilai sah. Nilai di luar rentang 0 sampai 100 menambah `data_tidak_sah`, kemudian `continue` melewati proses penjumlahan pada putaran tersebut. Rata-rata dihitung dari total nilai sah dibagi banyaknya nilai sah. Nilai 0 dan 100 tetap dianggap sah.

## Latihan 4 — Tabel Konversi Nilai ke Huruf Mutu

### Soal

Membuat tabel konversi nilai dari 100 sampai 0 dengan selang 5. Program menampilkan nilai, huruf mutu, dan keterangan menggunakan if-else bertingkat serta setw untuk merapikan kolom.

### File

`latihan4_konversi_nilai.cpp`

### Hasil Pengujian

Pengujian 1:
- Input: program dijalankan tanpa masukan pengguna.
- Output: tabel nilai dari 100 sampai 0 dengan selang 5, disertai huruf mutu dan keterangan.

### Catatan

Perulangan `for` dimulai dari nilai 100, berjalan selama nilai lebih besar atau sama dengan 0, dan mengurangi nilai sebanyak 5 pada setiap putaran. Percabangan `if-else` bertingkat memeriksa nilai dari batas tertinggi ke terendah. `setw` dan `left` digunakan untuk mengatur lebar serta perataan kolom agar keluaran lebih rapi.

## Latihan 5 — Mengamati Nilai Tertinggi dengan Debugger

### Soal

Menjalankan program `sinilai_v05.cpp` dengan debugger, memasang breakpoint pada kondisi `if (nilai_akhir > nilai_tertinggi)`, lalu mengamati kapan variabel `nama_tertinggi` berubah menggunakan data `contoh_masukan.txt`.

### File

`sinilai_v05.cpp`

### Hasil Pengujian

Pengujian 1:
- Siti Aminah: nilai akhir 83.975.
- `nilai_tertinggi` berubah dari -1 menjadi 83.975.
- `nama_tertinggi` berubah menjadi Siti Aminah.

Pengujian 2:
- Budi Santoso: nilai akhir 67.75.
- Nilainya lebih rendah daripada nilai tertinggi sebelumnya, sehingga nama tertinggi tetap Siti Aminah.

Pengujian 3:
- Rina Wati: nilai akhir 49.50.
- Nama tertinggi tetap Siti Aminah.

Pengujian 4:
- Dewi Lestari: nilai akhir 90.00.
- `nilai_tertinggi` berubah menjadi 90.00 dan `nama_tertinggi` berubah menjadi Dewi Lestari.

Pengujian 5:
- Eko Prasetyo: nilai akhir 71.00.
- Nama tertinggi tetap Dewi Lestari.

Pengujian 6:
- Fajar Nugroho: nilai akhir 25.75.
- Nama tertinggi tetap Dewi Lestari.

### Catatan

Breakpoint digunakan untuk menghentikan program tepat sebelum kondisi pembaruan nilai tertinggi dijalankan. Panel Variables pada debugger digunakan untuk memantau `nilai_akhir`, `nilai_tertinggi`, dan `nama_tertinggi`. Nama mahasiswa tertinggi hanya berubah ketika nilai akhir mahasiswa yang sedang diproses lebih besar daripada nilai tertinggi yang tersimpan sebelumnya.