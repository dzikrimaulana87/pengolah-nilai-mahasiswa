# Sistem Pengelolaan Nilai Mahasiswa

Program ini merupakan aplikasi konsol sederhana untuk pengelolaan nilai mahasiswa pada beberapa mata kuliah. Aplikasi ini dapat digunakan untuk memasukkan nilai mahasiswa, menampilkan data mahasiswa pada mata kuliah tertentu, mencari data mahasiswa berdasarkan predikat, menampilkan detail nilai mahasiswa, menukar nilai antara dua mahasiswa, dan mengisi nilai quiz yang kosong.

## Struktur Program

### Fungsi Utama

- **`main()`:** Fungsi utama untuk menampilkan menu utama dan memanggil fungsi-fungsi lainnya berdasarkan pilihan pengguna.

### Fungsi Mata Kuliah

- **`arraymatkul()`:** Fungsi untuk memilih mata kuliah dan mengembalikan indeks mata kuliah.

### Fungsi Pengelolaan Data

- **`inputdata()`:** Fungsi untuk memasukkan data mahasiswa dan nilai pada mata kuliah tertentu.
- **`tampilsemuamatkul()`:** Fungsi untuk menampilkan semua data mahasiswa pada mata kuliah tertentu.
- **`caripredikat()`:** Fungsi untuk mencari data mahasiswa berdasarkan predikat pada mata kuliah tertentu.
- **`tampildetail()`:** Fungsi untuk menampilkan detail nilai mahasiswa berdasarkan NPM.

### Fungsi Penilaian

- **`predikat()`:** Fungsi untuk menghitung nilai akhir, nilai huruf, dan predikat mahasiswa.

### Fungsi Menukar Nilai

- **`tampiltukar()`:** Fungsi untuk menukar nilai antara dua mahasiswa pada mata kuliah tertentu.
- **`tukarMahasiswa()`:** Fungsi untuk melakukan pertukaran nilai antara dua mahasiswa.

### Fungsi Remedial

- **`cekquiz()`:** Fungsi untuk mengecek dan mengisi nilai quiz yang kosong.

## Cara Penggunaan

1. Jalankan program dengan mengompilasi dan mengeksekusi kode sumber menggunakan kompiler C++.
2. Pilih berbagai fungsi yang tersedia sesuai dengan menu utama.
3. Ikuti petunjuk di layar untuk memasukkan data mahasiswa dan nilai.

## Lisensi

Program ini dilisensikan di bawah [Lisensi MIT](LICENSE). Anda dapat memodifikasi dan mendistribuskan ulang program ini untuk keperluan pendidikan.

## Catatan

Program ini memiliki batasan pada jumlah mahasiswa (1000 mahasiswa per mata kuliah) dan jumlah mata kuliah (5 mata kuliah). Jika diperlukan, batasan ini dapat ditingkatkan sesuai kebutuhan.
