# P05 Perulangan: for, while, do-while

Folder kode Pertemuan 5 Pemrograman Terstruktur. Setiap program punya flowchart pasangannya
di modul (Gambar 1 sampai 5); perhatikan panah yang kembali ke atas, itulah perulangan.

## Isi

| Berkas | Kegunaan |
|---|---|
| `for_hitung.cpp` | for dengan jumlah putaran yang diketahui; coba ubah `<=` menjadi `<` |
| `for_jumlah.cpp` | Pola akumulator: total dan rata-rata dari n nilai; coba masukkan 0 |
| `while_sentinel.cpp` | while dengan angka negatif sebagai tanda berhenti; jumlah putaran tidak diketahui |
| `do_while_menu.cpp` | do-while untuk menu yang diulang sampai pengguna memilih keluar; switch dari Pertemuan 4 |
| `sinilai_v04_awal.cpp` | Starter SiNilai v0.4: badan v0.3 sudah ada, lengkapi do-while, for, akumulator, dan rekap |
| `contoh_masukan.txt` | Tiga mahasiswa untuk menguji v0.4 |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya |

## Kasus uji SiNilai v0.4 (`./sinilai_v04 < contoh_masukan.txt`)

| Mahasiswa | Komponen | Nilai akhir | Huruf | Status |
|---|---|---|---|---|
| Siti Aminah | 100, 85.5, 78, 80 | 83.975 | A | Lulus |
| Budi Santoso | 80, 70, 65, 60 | 67.75 | C+ | Lulus |
| Rina Wati | 60, 50, 40, 55 | 49.5 | D | Belum lulus |

Rekap kelas: 3 mahasiswa, 2 lulus, 1 belum lulus, rata-rata kelas 67.075.
Jumlah mahasiswa 0 atau negatif harus ditanya ulang (do-while).

## Kalau program berputar tanpa henti

Tekan `Ctrl+C` di terminal. Penyebab yang paling sering: lupa langkah (`i++`), syarat yang tidak
pernah salah, atau mengetik huruf saat program meminta angka (`cin` gagal dan nilai variabelnya
menjadi 0; obatnya dibahas di Pertemuan 7).

## Yang dikumpulkan mahasiswa

Folder `p05` di repository `pt-NPM` berisi `sinilai_v04.cpp`. Lihat Modul Pertemuan 5 bagian E.

## Deklarasi AI

### Alat AI yang digunakan

ChatGPT.

### Untuk apa AI digunakan

AI digunakan sebagai alat bantu untuk:
- menjelaskan konsep perulangan `for`, `while`, dan `do-while`;
- membantu memahami penggunaan akumulator untuk menghitung total nilai dan jumlah mahasiswa yang lulus;
- memberikan panduan pengerjaan dan penjelasan bagian kode SiNilai v0.4;
- memeriksa kode yang sudah saya kerjakan dan membantu memahami pesan error saat proses build.

### Prompt yang digunakan

Prompt yang digunakan berupa pertanyaan tentang konsep perulangan dan pemeriksaan kode yang sedang saya kerjakan, misalnya meminta penjelasan fungsi `do-while`, penggunaan akumulator, serta cara memeriksa hasil program SiNilai v0.4 sesuai dengan modul P05.

### Cara memeriksa hasil AI

Saya mengetik dan menjalankan kode di VS Code menggunakan C++ dan Git Bash. Kode dibangun dengan perintah `g++ -std=c++20 -Wall -Wextra -Wpedantic -g p05/sinilai_v04.cpp -o p05/sinilai_v04`. Program kemudian dijalankan menggunakan `./p05/sinilai_v04 < p05/contoh_masukan.txt`. Hasilnya dibandingkan dengan tabel pengujian pada modul P05. Hasil pengujian menunjukkan tiga nilai akhir, yaitu 83.975, 67.75, dan 49.5, dengan rekap 3 mahasiswa, 2 lulus, 1 belum lulus, dan rata-rata kelas 67.075.