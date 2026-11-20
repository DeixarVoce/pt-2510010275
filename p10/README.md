# P10 Larik Satu Dimensi sebagai Parameter Fungsi

Folder kode Pertemuan 10 Pemrograman Terstruktur. Larik memakai daya tampung tetap (`const int MAKS`)
dan jumlah isi yang dihitung terpisah; `std::vector` sengaja tidak dipakai karena diserahkan ke PBO.

## Isi

| Berkas | Kegunaan |
|---|---|
| `larik_dasar.cpp` | Deklarasi, inisialisasi `{...}` dan `{}`, indeks 0 sampai `JUMLAH - 1`, membaca dan mencetak dengan perulangan |
| `batas_indeks.cpp` | Indeks di luar batas lolos compile dan menghasilkan sampah; penjaga batas ditulis sendiri |
| `larik_fungsi.cpp` | Larik sebagai parameter: `rerata`, `indeksTerbesar`, `cariNama` (`const`, hanya membaca) dan `naikkanSemua` (mengubah larik pemanggil) |
| `urutkan.cpp` | Selection sort menurun pada dua larik sejajar dengan `indeksTertinggi` dan `tukar` dari Pertemuan 9; jejak tiap putaran |
| `sinilai_v08_awal.cpp` | Starter SiNilai v0.8: main, prototipe, semua fungsi v0.7, dan `tukar` sudah jadi; enam fungsi berparameter larik TODO |
| `contoh_masukan.txt` | Sama dengan Pertemuan 7 dan 9 (sengaja berantakan) |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya |

## Fungsi baru SiNilai v0.8

| Fungsi | Parameter larik | Mengembalikan | Status di starter |
|---|---|---|---|
| `rerataKelas(const double nilai_akhir[], int jumlah)` | hanya membaca | `double` | TODO 1 |
| `hitungLulus(const double nilai_akhir[], int jumlah)` | hanya membaca | `int` | TODO 2 |
| `indeksTertinggi(const double nilai_akhir[], int mulai, int jumlah)` | hanya membaca | `int` indeks | TODO 3 |
| `urutkanMenurun(string nama[], string npm[], double nilai_akhir[], string huruf[], int jumlah)` | mengubah empat larik sejajar | `void` | TODO 4 |
| `cetakPeringkat(const string nama[], const string npm[], const double nilai_akhir[], const string huruf[], int jumlah)` | hanya membaca | `void` | TODO 5 |
| `hitungSebaran(const string huruf[], int jumlah, int& a, ..., int& e)` | hanya membaca; lima referensi | `void` | TODO 6 |

Perbedaan keluaran dengan v0.7 pada `contoh_masukan.txt` hanya tiga: baris judul, prompt jumlah yang kini
menyebut batas 1 sampai 50, dan blok baru `=== Peringkat Kelas ===` (terurut menurun) sebelum Laporan Kelas.

## Yang dikumpulkan mahasiswa

Folder `p10` di repository `pt-NPM` berisi `sinilai_v08.cpp`. Lihat Modul Pertemuan 10 bagian E.

## Deklarasi AI

### Alat AI yang digunakan

ChatGPT.

### Untuk apa AI digunakan

AI digunakan sebagai alat bantu untuk:
- memahami materi larik satu dimensi, indeks, batas larik, parameter fungsi, dan larik sejajar;
- memberikan penjelasan mengenai proses pencarian dan pengurutan menggunakan Selection Sort;
- membantu memahami dan menyusun bagian TODO 1 sampai TODO 6 berdasarkan modul Pertemuan 10;
- membantu memeriksa kode, memahami hasil compile, serta pengujian program SiNilai v0.8.

### Prompt yang digunakan

Pertanyaan tentang larik satu dimensi, indeks dan batas larik, cara mengirim larik sebagai parameter fungsi, penggunaan const, pencarian nilai tertinggi, Selection Sort, larik sejajar, cara menyelesaikan TODO pada modul P10, dan pemeriksaan hasil pengujian SiNilai v0.8.

### Cara memeriksa hasil AI

Saya membangun program menggunakan g++ dengan opsi `-Wall`, `-Wextra`, dan `-Wpedantic` untuk memeriksa error dan warning. Setelah itu, saya menjalankan program menggunakan `contoh_masukan.txt`, menguji batas jumlah mahasiswa 1 sampai 50, menguji nilai mahasiswa yang sama, lalu membandingkan hasil keluaran SiNilai v0.7 dengan v0.8 menggunakan perintah `diff`. Hasil pengujian menunjukkan bahwa program berjalan sesuai ketentuan modul, dengan perbedaan keluaran pada judul, prompt jumlah mahasiswa, dan blok Peringkat Kelas.