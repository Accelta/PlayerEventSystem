# 🎮 Player Attack Event System (Observer vs Mediator)

Project ini berisi dua versi implementasi sistem event serangan pemain dalam game menggunakan bahasa C++:

- **Observer Version** → Menggunakan *Observer Pattern*
- **Mediator Version** → Menggunakan *Mediator Pattern*

Setiap versi terdiri dari beberapa komponen utama:
- `Player`
- `Enemy`
- `SoundSystem`
- `ScoreSystem`
- `UI`

Semua output ditampilkan melalui komponen `UI` untuk menjaga konsistensi dan pemisahan tanggung jawab.

---

## 📌 1. Apa Perbedaan Struktur antara Observer dan Mediator?

| Aspek                     | Observer Pattern                                | Mediator Pattern                                 |
|--------------------------|--------------------------------------------------|--------------------------------------------------|
| Hub Komunikasi           | `Player` langsung memberi tahu semua observer    | `Player` hanya memberi tahu `Mediator`           |
| Tanggapan terhadap Event | Setiap observer merespons serangan secara mandiri | `Mediator` mengatur siapa merespons dan dalam urutan apa |
| Ketergantungan           | `Player` tahu semua observer                     | `Player` hanya bergantung pada `Mediator`        |
| Output                   | Observer mengembalikan pesan → UI menampilkan    | `Mediator` ambil hasil dari komponen → UI tampilkan |

---

## ⚙️ 2. Dalam Skala **Game Kecil**, Mana yang Lebih Praktis? Kenapa?

> **Observer Pattern** lebih praktis.

Karena:
- Struktur lebih sederhana dan langsung.
- Mudah menambahkan observer baru tanpa mengubah kode `Player`.
- Tidak membutuhkan kelas koordinator tambahan seperti Mediator.

Untuk proyek kecil dengan jumlah event terbatas, Observer Pattern cukup efisien dan mudah dipahami.

---

## 🧱 3. Dalam Skala **Game Besar** (dengan Banyak Event), Mana yang Lebih Scalable? Kenapa?

> **Mediator Pattern** lebih scalable.

Karena:
- Menjaga **loose coupling** antara komponen (komponen tidak saling mengetahui).
- Mudah mengatur urutan dan kondisi eksekusi event secara terpusat.
- `Mediator` mempermudah debugging, pengembangan, dan pengujian pada sistem kompleks.

---

## ⚠️ 4. Risiko Masing-Masing Pattern

| Pattern         | Risiko yang Harus Diwaspadai                                    |
|----------------|------------------------------------------------------------------|
| Observer        | Sulit dilacak jika banyak observer aktif, debugging lebih sulit |
| Mediator        | Bisa menjadi terlalu besar dan kompleks (*God Object*) jika tidak dikelola |

---

## 📂 Struktur Folder
src/
├── ObserverVersion/
│ ├── Header/
│ └── Function/
├── MediatorVersion/
│ ├── Header/
│ └── Function/
---

## ▶️ Cara Compile

### 🔧 Compile Observer Version:
```bash
g++ -std=c++11 -I src/ObserverVersion/Header src/ObserverVersion/Function/*.cpp -o Observer
✅ Kontrol Program
Tekan A untuk menyerang musuh.

Tekan Q untuk keluar dari program.

