# P06 Perulangan Lanjutan: Bersarang, break, continue, Debugger, iomanip

Folder kode Pertemuan 6 Pemrograman Terstruktur. Setiap program berpasangan dengan flowchart di modul;
pada perulangan bersarang ada dua panah yang kembali, dan pada break/continue ada panah yang
"memotong jalan".

## Isi

| Berkas | Kegunaan |
|---|---|
| `sinilai_v05.cpp` | Program utama SiNilai v0.5 untuk tugas P06 |
| `contoh_masukan.txt` | Data masukan untuk menguji program sesuai modul |
| `README.md` | Informasi tugas dan deklarasi penggunaan AI |
| `latihan_mandiri/` | Program dan catatan Latihan Mandiri P06 |

## Kasus uji SiNilai v0.5 (`./sinilai_v05 < contoh_masukan.txt`)

| Mahasiswa | Komponen | Nilai akhir (2 desimal) | Huruf | Status |
|---|---|---|---|---|
| Siti Aminah | 100, 85.5, 78, 80 | 83.97 | A | Lulus |
| Budi Santoso | 80, 70, 65, 60 | 67.75 | C+ | Lulus |
| Rina Wati | 60, 50, 40, 55 | 49.50 | D | Belum lulus |
| Dewi Lestari | 90, 90, 90, 90 | 90.00 | A | Lulus |
| Eko Prasetyo | 75, 72, 70, 68 | 71.00 | B | Lulus |
| Fajar Nugroho | 30, 20, 35, 25 | 25.75 | E | Belum lulus |

Laporan kelas: 6 mahasiswa, 4 lulus, 2 belum lulus, rata-rata 64.66, tertinggi Dewi Lestari (90.00).
Sebaran huruf: A 2, B 1, C 1, D 1, E 1 (B+ dihitung sebagai B, C+ sebagai C).

Catatan: 83.975 tampil sebagai 83.97, bukan 83.98, karena di dalam komputer 83.975 tersimpan
sebagai 83.97499...; pembulatan mengikuti angka yang tersimpan.

## Debugger

`launch.json` memakai `C:/msys64/ucrt64/bin/gdb.exe` dan program `<nama>.exe` hasil tasks.json.
Di Linux hapus akhiran `.exe` dan ganti `miDebuggerPath` menjadi `/usr/bin/gdb`; di macOS ganti
`MIMode` menjadi `lldb` dan hapus `miDebuggerPath`. Panduan lengkap: `03_Modul/Panduan_Debugger_VS_Code.docx`.

## Yang dikumpulkan mahasiswa

Folder `p06` di repository `pt-NPM` berisi `sinilai_v05.cpp`. Lihat Modul Pertemuan 6 bagian E.

## Deklarasi AI

### Alat AI yang digunakan

ChatGPT.

### Untuk apa AI digunakan

AI digunakan sebagai alat bantu untuk:
- memahami materi perulangan bersarang, `break`, `continue`, dan keluaran berkolom menggunakan `iomanip`;
- memberikan penjelasan dan panduan saat mengerjakan TODO pada program SiNilai v0.5;
- membantu memahami fungsi penghitung huruf mutu, pencarian nilai tertinggi, dan perulangan bersarang untuk sebaran huruf mutu;
- membantu memeriksa kode dan memahami hasil build serta pengujian program.

### Prompt yang digunakan

Prompt yang digunakan berupa pertanyaan tentang fungsi bagian kode, cara menyelesaikan TODO pada modul P06, serta pemeriksaan kode dan hasil pengujian SiNilai v0.5.

### Cara memeriksa hasil AI

Saya membangun program menggunakan g++ dengan opsi -Wall, -Wextra, dan -Wpedantic untuk memeriksa error dan warning. Setelah itu, saya menjalankan program menggunakan contoh_masukan.txt dan membandingkan hasilnya dengan tabel serta laporan kelas pada modul P06.

Hasil pengujian menunjukkan 6 mahasiswa, 4 lulus, 2 belum lulus, rata-rata kelas 64.66, mahasiswa dengan nilai tertinggi Dewi Lestari (90.00), serta sebaran huruf mutu A sebanyak 2 mahasiswa dan B, C, D, E masing-masing 1 mahasiswa.