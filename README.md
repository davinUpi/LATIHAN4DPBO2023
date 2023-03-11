# LATIHAN4DPBO2023
LATIHAN4DPBO2023
"Saya Davin mengerjakan evaluasi LATIHAN4DPBO2023 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
telah dispesifikasikan. Aamiin."

![DesainLatihan4 drawio](https://user-images.githubusercontent.com/100902319/224483251-f615f2e8-8edc-4c0e-a788-c43b39173b22.png)<br>
Penjelasan desain kurleb seperti gambar ini

## Kelas Human <br>
Kelas ini mewakili objek human (orang adalah benda) yang memiliki attribut nama, jenis kelamin, dan nik. Semua atribut berupa string. MEtode yang ada hanya berupa setter dan getter

## Kelas Civitas
Kelas ini merupakan turunan dari kelas Human. Teridiri dari attribut university dan email. Metode hanya berupa setter dan getter. Sebeanrnya, lebih cocok dijadikan parent, tidak mewarisi kelas apapun. Mewarisi kelas Human karena akan digunakan oleh dua kelas yang masih satu karakteristik dengan Human, namun memiliki atribut-atribut kelas ini juga.

## Kelas Mahasiswa
Kelas ini merupakan turunan dari kelas Civitas, sehingga memiliki atribut2 Civitas dan Human. Kelas ini memiliki objek Prodi secara aggregasi (saling lepas). Karena satu prodi dimiliki oleh banyak mahasiswa. Mahasiswa diturunkan dari civitas karena seorang mahasiswa pasti berasal daari kampus tertentu. attribut dirinya sendiri ada nim dan fakultas berupa string, serta prodi berupa objek Prodi. Metode berupa setter dan getter

## Kelas Dosen
Kelas ini merupakan turunan dari kelas Civitas, sehingga memiliki atribut2 Civitas dan Human. Kelas ini memiliki objek Prodi secara agregasi sebab satu prodi dapat dimiliki banyak dosen. Alasan penurunan sama dengan kelas sebelumnya. Adapun atribut kelas ini ada nip, fakultas, pen_terakhir, skill yang berupa string, dan prodi yang berupa objek Prodi. Metode berupa setter dan getter

## kelas Course
Kelas ini mewakili mata kuliah. Terdiri dari nama dan kode. Metode hanya berupa setter dan getter. Merupakan Component dari kelas Prodi.

## Kelas Prodi
Kelas ini memiliki array/list of object Course secara composite. Rata-rata mata kuliah tidak dimiliki secara bagi-bagi oleh setiap prodi: setiap prodi memiliki mata kuliah mereka sendiri. Adapun saran untuk hubungan antara kelas ini dan kelas Course adalah agregasi sebab adanya mata kuliah umum. Namun, perlu diingat mata kuliah khusus tidak dapat ada bila prodi bidangnya tidak ada. Atribut kelas ini ada nama dan kode yang berupa string, dan courses yang berupa array of object Course.

# Dokumentasi
![Screenshot (565)](https://user-images.githubusercontent.com/100902319/224483888-f5c3cd76-f1da-4027-b730-a18f016f79f2.png)<br>
![Screenshot (566)](https://user-images.githubusercontent.com/100902319/224483890-c2dc98c5-840b-4187-bcc6-9d907ee12f1f.png)<br>
![Screenshot (567)](https://user-images.githubusercontent.com/100902319/224483894-889392c9-0d87-459a-8dac-bc6abfbdde82.png)<br>
![Screenshot (568)](https://user-images.githubusercontent.com/100902319/224483896-94bf0cba-196b-4c9b-8ea2-34adde0a1db4.png)<br>
![Screenshot (569)](https://user-images.githubusercontent.com/100902319/224483904-b1821d0a-5c24-4d33-a2d7-2d131e0913e3.png)<br>

### catatan
Desain beda bahasa mungkin sedikit berbeda, saya cepat lupa atau memang tata bahasanya tidak memungkinkan :sob:
